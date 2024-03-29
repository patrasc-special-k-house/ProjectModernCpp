#include <iostream>
#include <filesystem>
#include <memory>
#include <string>
#include "Question.h"
#include "NewGame.h"
#include "Lobby.h"

#include <crow.h>
#include <sqlite_orm/sqlite_orm.h>
namespace sql = sqlite_orm;


int main()
{
	Lobby lobby;

	const std::string db_file = "game_database.sqlite";
	Storage db = createStorage(db_file);
	db.sync_schema();
	crow::SimpleApp app;


	CROW_ROUTE(app, "/history")([&db]() {
		std::vector<crow::json::wvalue> MatchesJson;
	for (const auto& match : db.iterate<Matches>())
	{
		MatchesJson.push_back(crow::json::wvalue
			{
				{"id", match.id},
				{"name", match.name},
				{"wins", match.wins}
			}	
		);
	}
	return crow::json::wvalue(MatchesJson);
		});

	CROW_ROUTE(app, "/Questions")([&db]() {
	std::vector<crow::json::wvalue>Questions;
	for (const auto& index : db.iterate<Question>())
	{
		Questions.push_back(crow::json::wvalue
			{
				{"id",index.m_id},
				{"question",index.m_question},
				{"answer",index.m_answer}

			});
	}
	return crow::json::wvalue(Questions);
		});


	CROW_ROUTE(app, "/QuestionMultipleAnswer")([&db]() {
		std::vector < crow::json::wvalue>Questions;
	for (const auto& index : db.iterate<QuestionMultipleAnswers>())
	{
		Questions.push_back(crow::json::wvalue
			{
				{"id",index.m_id},
				{"question",index.m_question},
				{"answer",index.m_answer},
				{"answer1",index.m_answers1},
				{"answer2",index.m_answers2},
				{"answer3",index.m_answers3},
				{"answer4",index.m_answers4}

			});
	}
	return crow::json::wvalue(Questions);
		});
	auto questionNumber = db.count<Question>();
	auto multipleAnswerNumber = db.count< QuestionMultipleAnswers>();
	if (questionNumber == 0) {
		populateStorage(db);
	}
	if (multipleAnswerNumber == 0) {
		populateStorage(db);
	}
	CROW_ROUTE(app, "/LoginUser").methods("POST"_method)([&db](const crow::request& req) {
		auto data = crow::json::load(req.body);
		auto username = data["username"].s();
		auto password = data["password"].s();
		for (const auto& player : db.iterate<Users>())
		{
			if (player.m_username == username)
			{
				if (player.m_password == password)
				{
					return crow::response(200, "Logged in with succes!");
				}
				else return crow::response(400, "Typed password is incorrect");
			}
			else return crow::response(400, "Typed username is incorrect");
		}
		});

	CROW_ROUTE(app, "/RegisterNewUsers").methods("POST"_method)([&db](const crow::request& request) {
		auto data = crow::json::load(request.body);
	for (auto& index : db.iterate<Users>()) {
		if (index.m_username == data["username"].s()) {
			return crow::response(400, "You are already registered");
		}
	}
	Users user;
	user.m_username = data["username"].s();
	user.m_password = data["password"].s();
	db.insert(user);
	return crow::response(200);
		});


	CROW_ROUTE(app, "/CreateLobby/<int>").methods("POST"_method)
		([&lobby](const crow::request& req, crow::response& res, int numberOfPlayers) {
		Map map(numberOfPlayers);
	lobby.SetMap(map);
	lobby.SetNumberOfPlayers(numberOfPlayers);
	lobby.SetNumberOfRounds(numberOfPlayers);
	crow::response(200);
	res.write("Lobby created!");
			});

	CROW_ROUTE(app, "/AddPlayerToLobby/<string>/<string>").methods("POST"_method)([&lobby](const crow::request& req, crow::response& res, const std::string& name, const std::string& password) {
		lobby.addPlayer(name, password);
	res.write("Player added to lobby!");
	crow::response(200);
		});
	
	app.port(18080).multithreaded().run();
}