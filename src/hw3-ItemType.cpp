//------------------------------------------------------
//                      ItemType
// Class Implementation File
// Ch. 3, C++ Plus Data Structures, Dale 5e, p. 155
// Filename: ch03-ItemType.cpp
// Modified: value is of type int
//------------------------------------------------------
#include <fstream>
#include <iostream>
#include "hw3-ItemType.h"
using namespace std;

//------------------------------
//         ItemType
//     default constructor
//------------------------------
ItemType::ItemType()
{ value = 0; }

//------------------------------
//         ComparedTo
// Compares one ItemType object to another.  Returns
//   LESS, if self "comes before" item
//   GREATER, if self "comes after" item
//   EQUAL, if self and item are the same
//------------------------------
RelationType ItemType::ComparedTo(ItemType otherItem) const
{
  if (value < otherItem.value)
    return LESS;
  else if (value > otherItem.value)
    return GREATER;
  else return EQUAL;
}

//------------------------------
//         Initialize
//------------------------------
void ItemType::Initialize(int number)
{ value = number; }

//------------------------------
//           Print
// Adds ItemType value to output stream
//------------------------------
void ItemType::Print() const
// post: value has been sent to cout.
{ cout << value; }

int ItemType::getValue()
{return value;}
