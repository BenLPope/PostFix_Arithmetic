//-----------------------------------------
// Stack Class Implementation File
// Array-based implementation (static)
// Ch. 5, Dale 5e, p. 286-292
// Filename: hw3-StackType.cpp
//-----------------------------------------
#include "hw3-StackType.h"
#include <iostream>
using namespace std;

//-----------------------------------------
//          Default constructor
//-----------------------------------------
StackType::StackType()
{
  top = -1;
}

//-----------------------------------------
//              IsEmpty
// Pre:  Stack has been initialized.
// Post: Function value = (stack is empty)
//-----------------------------------------
bool StackType::IsEmpty() const
{
  return (top == -1);
}

//-----------------------------------------
//              IsFull
// Pre:  Stack has been initialized.
// Post: Function value = (stack is full)
//-----------------------------------------
bool StackType::IsFull() const
{
  return (top ==  MAX_ITEMS-1);
}

//-----------------------------------------
//               Push
// Pre:  Stack has been initialized.
// Post: If (stack is full),
//         FullStack exception is thrown;
//       otherwise,
//         newItem is at the top of the stack
//-----------------------------------------
void StackType::Push(ItemType newItem)
{
  if( IsFull() )
    throw FullStack();
  top++;
  items[top] = newItem;
}

//-----------------------------------------
//               Pop
// Pre:  Stack has been initialized.
// Post: If (stack is empty),
//         EmptyStack exception is thrown;
//       otherwise,
//         top element has been removed from stack
//-----------------------------------------
void StackType::Pop()
{
  if( IsEmpty() )
    throw EmptyStack();
  top--;
}

//-----------------------------------------
//               Top
// Pre:  Stack has been initialized.
// Post: If (stack is empty),
//         EmptyStack exception is thrown;
//       otherwise,
//         top element has been removed from stack.
//-----------------------------------------
ItemType StackType::Top()
{
  if (IsEmpty())
    throw EmptyStack();

  return items[top];
}

