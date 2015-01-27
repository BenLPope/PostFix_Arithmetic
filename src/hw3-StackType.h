#include "hw3-ItemType.h"

class FullStack
// Exception class thrown by Push when stack is full.
{};

class EmptyStack
// Exception class thrown by Pop and Top when stack is emtpy.
{};


class StackType
{
  private:
    int top;
    ItemType  items[MAX_ITEMS];
  public:

   StackType();                // Default constructor
   bool IsFull() const;        // Is stack full?
   bool IsEmpty() const;       // Is stack empty?
   void Push(ItemType item);   // Adds newItem to top of stack
   void Pop();                 // Removes top item from stack
   ItemType Top();             // Returns a copy of top item on stack
};

