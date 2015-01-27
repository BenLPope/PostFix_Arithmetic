//--------------------------------------------------------------
//         HW3
// Ben Pope
// CS3350 1pm Tue-Thurs
// Due date:   Tuesday, October 9th, 2012
//
// Compile command: g++ hw3.cpp hw3-ItemType.cpp hw3-StackType.cpp
//
// Input: Postfix notation arithmatic
// Processing: takes in two numbers, then does the operation typed after
// the numbers against the two input numbers
// Output: result of postfix notation arithmatic
// Filename: hw3.cpp
//--------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>

#include "hw3-ItemType.h"
#include "hw3-StackType.h"
using namespace std;


int main()
{

StackType stack; // Stack
ItemType item; // Items to be placed on stack
string expression; // Holds the expresion as a string
int number; // holds the number value from item
int numHolder; // holds the result
char holder; // holder for individual characters

cout << "Enter an Expression and Press Return: ";
getline (cin, expression);
for(int i = 0; i < expression.length(); i++)
	{
	 holder = expression[i];
	 if (holder == '+')
		{
		 item = stack.Top();
		 number = item.getValue();
		 stack.Pop();
		 item = stack.Top();
		 numHolder = number + item.getValue();
		 stack.Pop();
		 item.Initialize(numHolder);
		 stack.Push(item);
		} 
	 else if (holder == '-')
                {
                 item = stack.Top();
                 number = item.getValue();
                 stack.Pop();
                 item = stack.Top();
                 numHolder = item.getValue() - number;
                 stack.Pop();
                 item.Initialize(numHolder);
                 stack.Push(item);
                }
	 else if (holder == '*')
                {
                 item = stack.Top();
                 number = item.getValue();
                 stack.Pop();
                 item = stack.Top();
                 numHolder = number * item.getValue();
                 stack.Pop();
                 item.Initialize(numHolder);
                 stack.Push(item);
                }
	 else if (holder == '/')
                {
                 item = stack.Top();
                 number = item.getValue();
                 stack.Pop();
                 item = stack.Top();
                 numHolder = item.getValue() / number;
                 stack.Pop();
                 item.Initialize(numHolder);
                 stack.Push(item);
                }

	 else	
	    {   number = holder - '0';
	 	item.Initialize(number);
	 	stack.Push(item);
	    }
	}

item = stack.Top();
cout << "Result = ";
item.Print();
cout << endl;

}
