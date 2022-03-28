/*
 * human_female.h
 *
 *  Created on: Oct. 26, 2021
 *      Author: viet
 */

#ifndef CODE_HDR_HUMAN_FEMALE_H_
#define CODE_HDR_HUMAN_FEMALE_H_

#include "human.h"

class human_female: public human
{
  public:
	human_female(std::string p_name, unsigned int p_age);
	virtual ~human_female();
	void fuck(human &p_partner) override;
	void introduce(void) override final;
};

#endif /* CODE_HDR_HUMAN_FEMALE_H_ */
