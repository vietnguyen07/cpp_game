/*
 * main.cpp
 *
 *  Created on: Sep. 4, 2021
 *      Author: viet
 */

#include "main.h"
#include "human.h"
#include "human_female.h"
#include <vector>
#include "idSystem.h"
#include <chrono>
#include <thread>
#include "iostream"

int main()
{
	std::vector <human*> human_lst;
	human_female * first_fm = new human_female("Lilith",0);
	human_female * second_fm = new human_female("Eva",0);
	human_lst.push_back(first_fm);
	human_lst.push_back(second_fm);

	for(auto person:human_lst)
	{
		person->introduce();
		std::this_thread::sleep_for(chrono::milliseconds(1000));
	}




	return 0;
}


