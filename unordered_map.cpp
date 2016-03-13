/***********************************************************
 * Hash table with unordered_map
 *
 * Compile with:
 *   g++ -std=c++11 unordered_map.cpp
 **********************************************************/
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  unordered_map<string, int> count;
  string filename;

  cout << "Filename: ";
  cin  >> filename;

  ifstream fin(filename.c_str());

  // read the file
  string temp;
  while (fin >> temp)
  {
    if (count.find(temp) == count.end())
      count[temp] = 1;
    else
      count[temp] = count[temp] + 1;
  }

  // get user input
  do
  {
    cout << "Word to search for (q to quit): ";
    cin  >> temp;

    cout << temp << " occurs " << count[temp] << " times" << endl;
  } while (temp != "q");
}
