/*
 * human.c
 *
 *  Created on: Sep. 5, 2021
 *      Author: viet
 */

#include "human.h"

human::human(std::string p_name, unsigned int p_age)
:age(p_age), name(p_name)
{}

void human::walk()
{
	printf("I,%s, is walking\n", this->name.c_str());
}

void human::introduce()
{
	printf("My name is %s,%u years old\n", this->name.c_str(), this->age);
}

human * human::operator +(const human * p_human)
{
	this->name += p_human->name;
	return this;
}

uint_32 human::get_age(void)
{
	return this->age;
}

uint_32 human::get_hp(void)
{
	return this->hp;
}

uint_32 human::get_level(void)
{
	return this->gender;
}

