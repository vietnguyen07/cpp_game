/*
 * idSystem.cpp
 *
 *  Created on: Nov. 8, 2021
 *      Author: viet
 */

#include "idSystem.h"

unsigned long long idSystem::currentID=0;

idSystem::idSystem()
{
};

idSystem::~idSystem()
{

};

unsigned long long idSystem::getID()
{
  unsigned long long ID= idSystem::currentID;
  idSystem::currentID++;
  return ID;
}

