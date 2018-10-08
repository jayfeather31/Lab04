//VectorDriver.cpp
//Spencer Romberg
//COSC 2030 Fall 2018
//Lab 04
//October 8th, 2018
//demonstrates the functions created in VectorDriver.h

#include "VectorDriver.h"
#include <algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  vector<short> test_vector;

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  add_number(test_vector);
  cout << "elements added to a different vector (to avoid confusion, refer to this as new vector 2): ";
  print(test_vector);
  cout << endl;

  cout << "new vector containing even index elements: ";
  print_even(sample_vector);
  cout << endl;

  cout << "does a value exist in the new vector? (in this case, 4): " << is_present(sample_vector, 4) << endl;
  cout << "does a value exist in the new vector? (in this case, 9): " << is_present(sample_vector, 9) << endl;
	
  vector<short> test_vector_two;
  test_vector_two.push_back(4);
  test_vector_two.push_back(17);
  test_vector_two.push_back(33);
  test_vector_two.push_back(21);
  test_vector_two.push_back(5);

  cout << "elements of new vector 3 prior to sorting: ";
  print(test_vector_two);
  cout << endl;
  cout << "after sorting: ";
  std::sort(test_vector_two.begin(), test_vector_two.end());
  print(test_vector_two);
  cout << endl;
  

  system("pause");
  return 0;
}
