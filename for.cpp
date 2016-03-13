/***********************************************************                                                                                          
 * Enhanced for loop over a collection 
 *                                                                                                                                                    
 * Compile with:                                                                                                                                      
 *   g++ -std=c++11 for.cpp                                                                                                                    
 **********************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  int numItems;

  cout << "How many items? ";
  cin  >> numItems;

  int temp;
  
  for (int i = 0; i < numItems; i++)
  {
    cout << "Element " << i << ": ";
    cin  >> temp;
    v.push_back(temp);
  }

  // traverse vector
  for (int i : v)
  {
    cout << i << endl;
  }
  
  return 0;
}
