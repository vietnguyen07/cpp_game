/*
 * human.h
 *
 *  Created on: Sep. 5, 2021
 *      Author: viet
 */

#ifndef CODE_HDR_HUMAN_H_
#define CODE_HDR_HUMAN_H_

#include <string>
#include "common.h"

using namespace std;

enum human_gender
{
	none,
	male,
	female
};

class human
{
	public:
		human(string p_name, unsigned int p_age);
		virtual void walk();
		virtual void introduce();
		human * operator +(const human * p_human);
		virtual uint_32 get_age();
		virtual uint_32 get_hp();
		virtual uint_32 get_level();

	private:
		string name="none";
		uint_32 age=0;
		uint_32 hp=1;
		uint_32 level=1;
		human_gender gender = none;
};



#endif /* CODE_HDR_HUMAN_H_ */
