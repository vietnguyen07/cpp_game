/*
 * idSystem.cpp
 *
 *  Created on: Nov. 8, 2021
 *      Author: viet
 */

#include "idSystem.h"

/*
 * Requirement: arc_env_4
 */
unsigned long long idSystem::currentID=0;
idSystem * idSystem::_instance=nullptr;

idSystem::idSystem()
{
};

idSystem::~idSystem()
{

};

/*
 * Requirement: arc_env_2
 */
unsigned long long idSystem::getID()
{
	/*
	 * Requirement: arc_env_3
	 */
	unsigned long long ID= idSystem::currentID;
	idSystem::currentID++;
	return ID;
}

/*
 * Requirement: arc_env_1
 */
idSystem * idSystem::getInstance()
{
	if(idSystem::_instance == nullptr)
	{
		idSystem::_instance = new idSystem();
	}
	return idSystem::_instance;
}

