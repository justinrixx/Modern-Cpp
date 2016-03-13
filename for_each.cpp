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

void output(int i)
{
  cout << i << endl;
}

void triple(int & i)
{
  i *= 3;
}

int main()
{
  vector<int> v;

  for (int i = 0; i < 10; i++)
  {
    v.push_back(i);
  }

  for_each(v.begin(), v.end(), output);

  for_each(v.begin(), v.end(), triple);

  for_each(v.begin(), v.end(), output);
  
  return 0;
}
