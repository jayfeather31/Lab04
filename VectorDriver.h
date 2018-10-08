/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */

 //VectorDriver.cpp
 //Spencer Romberg
 //COSC 2030 Fall 2018
 //Lab 04
 //October 8th, 2018
 //Uses the original code found in VectorDriver.h to create a new, modified VectorDriver.h
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// adds a random set of numbers
void add_number(vector<short> &data)
{
	for (int i = 0; i <= 9; i++)                 //yes, I know these aren't exactly random, but the requirements should be met
	{
		data.push_back(i);
	}
}

// prints out only what is in the even indexes
void print_even(const vector<short> &data)
{
	if (data.empty())
	{
		cout << "<empty";
	}
	else
	{
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i++)
		{
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}

// determines whether a value is present within a vector
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();
	while (iter != data.end())
	{
		if (*iter == value)              //if the value is equal to what is the current iteration, STOP and return true
		{
			return true;
		}

		else                             //otherwise, carry on
		{
			iter++;
		}
	}

	return false;                        //if the program reaches the end of the data present, return false
}



