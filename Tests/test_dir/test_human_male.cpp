/*
 * test_human_male.cpp
 *
 *  Created on: Apr. 17, 2022
 *      Author: viet
 */
#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include <vector>

#include "human.h"
#include "human_male.h"

using namespace std;

std::vector<human*> humanLst;
std::vector<human*>::iterator it;
std::map<string, human*> human_map;
std::map<string, human*>::iterator human_map_it;
string nameLst[] = {"first_born", "second_born"};

int main(void) {
  for (auto name : nameLst) {
    humanLst.push_back(new human_male(name, 0));
  }

  for (it = humanLst.begin(); it != humanLst.end(); it++) {
    (*it)->introduce();
    string local_name = (*it)->get_name();
    human_map[local_name] = *it;
  }

  for (human_map_it = human_map.begin(); human_map_it != human_map.end();
       human_map_it++) {
    std::cout << (human_map_it->second)->get_name() << std::endl;
  }

  return 0;
}

