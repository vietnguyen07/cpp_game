/*
 * human_male.cpp
 *
 *  Created on: Oct. 28, 2021
 *      Author: viet
 */


#include "human_male.h"
#include <iostream>

human_male::human_male(std::string p_name, unsigned int p_age)
:human(p_name, p_age)
{
	this->set_age(p_age);
	this->set_name(p_name);
	this->set_gender(human_gender::male);
}

human_male::~human_male()
{

}

void human_male::fuck(human &p_partner)
{
	if (p_partner.get_gender() == this->get_gender())
	{
		cout << "hardware incompatible!!!";
	}
	else
	{
		human::fuck(p_partner);
	}
}

void human_male::introduce(void)
{
	human::introduce();
}
