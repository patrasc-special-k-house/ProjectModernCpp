#include "Advantage.h"

void Advantage::answearElimination(const Player& player, const uint8_t& value, Question question)
{
	if (value == 0 && question.isNumerical() == false)
	{
		return;
	}
	else
	{
		std::vector<std::string>answers = question.getAnswears();
		uint8_t correctAnswear = question.getCorrectAnswear();
		answers.erase(answers.begin() + correctAnswear + 1);
		answers.erase(answers.begin() + correctAnswear - 1);
	}



}