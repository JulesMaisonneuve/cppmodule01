#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*functionPointer[4])(void);
	std::string messages[4] = {"debug", "info", "warning", "error"};

	functionPointer[0] = &Harl::debug;
	functionPointer[1] = &Harl::info;
	functionPointer[2] = &Harl::warning;
	functionPointer[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == messages[i])
			return (this->*functionPointer[i])();
	}

}

Harl::~Harl(void)
{
	return ;
}
