/***********************************************************
 * Map function with for_each
 *
 * Compile with:
 *   g++ -std=c++11 for_each.cpp
 **********************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*****************************************
 * Just output the item
 ****************************************/
void output(int i)
{
  cout << i << endl;
}

/****************************************
 * Triple the value
 ***************************************/
void triple(int & i)
{
  i *= 3;
}

int main()
{
  vector<int> v;

  // construct a list
  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  /*****************************************
   * Each call to for_each iterates through
   * the list, applying the function passed
   * in to each member
   ****************************************/
  for_each(v.begin(), v.end(), output);

  for_each(v.begin(), v.end(), triple);

  for_each(v.begin(), v.end(), output);
  
  return 0;
}
