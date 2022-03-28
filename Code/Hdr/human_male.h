/*
 * human_male.h
 *
 *  Created on: Oct. 28, 2021
 *      Author: viet
 */

#ifndef CODE_HDR_HUMAN_MALE_H_
#define CODE_HDR_HUMAN_MALE_H_


#include "human.h"

class human_male: public human
{
  public:
	human_male(std::string p_name, unsigned int p_age);
	virtual ~human_male();
	void fuck(human &p_partner) override final;
	void introduce(void) override final;
};


#endif /* CODE_HDR_HUMAN_MALE_H_ */
