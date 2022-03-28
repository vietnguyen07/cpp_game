/*
 * timeline.h
 *
 *  Created on: Nov. 22, 2021
 *      Author: viet
 */

#ifndef CODE_HDR_TIMELINE_H_
#define CODE_HDR_TIMELINE_H_


class timeline final
{
	public:
		timeline();
		void start(void);
		void timepass(void);
		unsigned long long getYear();
	private:
		unsigned long long year;
		bool timelineStart;
};


#endif /* CODE_HDR_TIMELINE_H_ */
