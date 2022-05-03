#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	cout <<  "I love having extra bacon. I really do!" << endl;
}

void Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money" << endl;
}

void Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free" << endl;
}

void Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level)
{
	void (Harl::*functionPointer[4])(void);
	string messages[4] = {"debug", "info", "warning", "error"};

	functionPointer[0] = &Harl::debug;
	functionPointer[1] = &Harl::info;
	functionPointer[2] = &Harl::warning;
	functionPointer[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (level == messages[i])
			return this->*functionPointer[i]();
	}

}

Harl::~Harl(void)
{
	return ;
}
