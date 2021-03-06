#ifndef CITYLIST_H
#define CITYLIST_H
// Author: Sean Davis
#include <fstream>
#include "city.h"

class CityNode;
class CityList
{
private:
  CityNode* head;
  CityNode* tail;
  static int count;
public:
  CityList();
  ~CityList();
  static int getCount(){ return count; };
  CityList& operator+= (const City& rhs);
  CityList& operator-= (const City& rhs);
  City& operator[] (const int index)const;
  City& operator[] (const int index);
}; //City list



class CityNode
{
friend class CityList;
  City city;
  CityNode* next;
  CityNode(const City& ci);
  CityNode(const City& ci, CityNode* n);
}; //City node

#endif  // CITYLIST_H 