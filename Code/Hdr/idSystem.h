/*
 * idSystem.h
 *
 *  Created on: Nov. 8, 2021
 *      Author: viet
 */

#ifndef CODE_HDR_IDSYSTEM_H_
#define CODE_HDR_IDSYSTEM_H_


class idSystem
{
  public:
	idSystem();
	~idSystem();
	static unsigned long long currentID;
	static unsigned long long getID();

};


#endif /* CODE_HDR_IDSYSTEM_H_ */
