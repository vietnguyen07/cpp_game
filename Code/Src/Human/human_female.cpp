#include "human_female.h"
#include <iostream>

human_female::human_female(std::string p_name, unsigned int p_age)
:human(p_name, p_age)
{
	this->set_age(p_age);
	this->set_name(p_name);
	this->set_gender(human_gender::female);
}

human_female::~human_female()
{
	delete this;
}

void human_female::fuck(human &p_partner)
{
	if (p_partner.get_gender() == this->get_gender())
	{
		cout << "are you lesbian??? no fuck for you";
	}
	else
	{
		human::fuck(p_partner);
	}
}

void human_female::introduce(void)
{
	human::introduce();
}
