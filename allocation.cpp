/***********************************************************
 * Memory allocation with make_unique
 *
 * Compile with:
 *   g++ -std=c++14 allocation.cpp
 **********************************************************/

#include <iostream>
#include <memory>

using namespace std;

int main()
{
  int numItems;
  
  cout << "How many list items? ";
  cin  >> numItems;

  // allocate the list of items
  auto list = make_unique<int[]>(numItems);

  for (int i = 0; i < numItems; i++)
  {
    cout << "Enter number " << i << ": ";
    cin  >> list[i];
  }

  // output the list
  for (int i = 0; i < numItems; i++)
  {
    cout << list[i] << endl;
  }

  // no need to free
  
  return 0;
}
