//------------------------------------------------------
//                       ItemType
// Class Specification File
// Encapsulates type of items in list
// Ch. 3, C++ Plus Data Structures, Dale 5e, p. 154, 155
// same as code from Ch. 4 ItemType.h
// Filename: hw3-ItemType.h
//------------------------------------------------------
#include <fstream>
using namespace std;

#ifndef ITEMTYPE_H
#define ITEMTYPE_H

const int MAX_ITEMS = 5;
enum RelationType  {LESS, GREATER, EQUAL};

class ItemType
{
  private:
    int value;
  public:
    ItemType();
    RelationType ComparedTo(ItemType) const;
    void Print() const;
    void Initialize(int);
    int getValue();
};
#endif

