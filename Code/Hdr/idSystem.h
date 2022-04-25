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

	~idSystem();
	static unsigned long long getID();
	static idSystem * getInstance();


  private:
	static idSystem * _instance;
	static unsigned long long currentID;
	idSystem();

};


#endif /* CODE_HDR_IDSYSTEM_H_ */
