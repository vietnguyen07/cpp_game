/*
 * test_id_system.cpp
 *
 *  Created on: Apr. 24, 2022
 *      Author: viet
 */

#include <string>
#include <iostream>
#include <string>
#include <map>
#include <list>
#include "idSystem.h"

int main()
{
	idSystem * idSys = idSystem::getInstance();
	idSystem * idSys2 = idSystem::getInstance();

	if(idSys == idSys2)
	{
		std::cout << "singleton passed"<< std::endl;
	}

	unsigned long long int id1 = idSys->getID();
	unsigned long long int id2 = idSys->getID();

	if(id1 == (id2-1))
	{
		std::cout << "incremental ID passed"<< std::endl;
	}

	return 0;
}


