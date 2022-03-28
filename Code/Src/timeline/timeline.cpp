/*
 * timeline.cpp
 *
 *  Created on: Nov. 24, 2021
 *      Author: viet
 */

#include "timeline.h"

timeline::timeline()
:year(0), timelineStart(false)
{

}

void timeline::start()
{
	this->timelineStart = true;
}

void timeline::timepass()
{
	this->year++;
}

unsigned long long timeline::getYear()
{
	return this->year;
}
