/*
 * main.cpp
 *
 *  Created on: Sep. 4, 2021
 *      Author: viet
 */

#include "main.h"
#include "human.h"
#include <vector>

int main()
{
	std::vector <human*> human_lst;
	std::string human_name;

	for(unsigned int i=0; i < 10; i++)
	{
		human_name = "human_" + std::to_string(i);
		human_lst.push_back(new human(human_name,0));
	}

//	for(human * person:human_lst)
//	{
//		person->introduce();
//	}

	human * combine = *human_lst[0] + human_lst[1];
	combine->introduce();

	return 0;
}


