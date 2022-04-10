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

enum class human_gender
{
	none,
	male,
	female
};

class human
{
	public:

		virtual ~human();
		virtual void walk();
		virtual void introduce();
		virtual void fuck(human &p_partner);

		// Getters
		virtual string get_name() final;
		virtual uint_32 get_age() final;
		virtual uint_32 get_hp() final;
		virtual uint_32 get_level() final;
		virtual human_gender get_gender() final;
		virtual bool is_pregnant();
		virtual unsigned long long get_id() final;

		// Setters
		virtual bool set_name(string p_name) final;
		virtual bool set_age(uint_32 p_age) final;
		virtual bool set_hp(uint_32 p_hp) final;
		virtual bool set_level(uint_32 p_level) final;
		virtual bool set_gender(human_gender p_gender) final;


	protected:
		// this class is not meant
		// to be created directly
		human(string p_name, unsigned int p_age);

	private:
		string name="none";
		uint_32 age=0;
		uint_32 hp=1;
		uint_32 level=1;
		unsigned long long id;
		bool pregnant= false;
		human_gender gender = human_gender::none;
		virtual void set_pregnant(bool p_pregnant) final;
};



#endif /* CODE_HDR_HUMAN_H_ */
