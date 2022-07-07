/*
 * human.c
 *
 *  Created on: Sep. 5, 2021
 *      Author: viet
 */

#include "human.h"
#include "idSystem.h"
#include <iostream>
using namespace std;

human::human(std::string p_name, unsigned int p_age)
:age(p_age), name(p_name)
{
  /* Get unique ID for each human */
  this->id = idSystem::getID();
}

human::~human()
{}

void human::walk()
{
	printf("I,%s, is walking\n", this->name.c_str());
}

void human::introduce()
{
	printf("My name is %s,%u years old, id: %llu\n", this->name.c_str(),\
			this->age, this->id);
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
	return this->level;
}

string human::get_name()
{
	return this->name;
}

human_gender human::get_gender()
{
	return this->gender;
}

bool human::set_age(uint_32 p_age)
{
	this->age = p_age;
	return true;
}

bool human::set_gender(human_gender p_gender)
{
	this->gender = p_gender;
	return true;
}

bool human::set_hp(uint_32 p_hp)
{
	this->hp = p_hp;
	return true;
}

bool human::set_name(string p_name)
{
	this->name = p_name;
	return true;
}

bool human::set_level(uint_32 p_level)
{
	this->level = p_level;
	return true;
}

bool human::is_pregnant()
{
	return this->pregnant;
}

void human::set_pregnant(bool p_pregnant)
{
	this->pregnant = p_pregnant;
}

void human::fuck(human &p_partner)
{
	switch(this->gender)
	{
	  case human_gender::male:
		  std::cout << this->name << " is fucking " << p_partner.name << endl;
		  break;
	  case human_gender::female:
		  std::cout << this->name << " is being fucked by "\
		  << p_partner.name << endl;
	}
};

unsigned long long human::get_id(){
	return this->id;
}
