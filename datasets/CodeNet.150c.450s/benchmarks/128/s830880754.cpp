#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str;

  cin >> str;

  for (auto itr = end(str); itr-- != begin(str);) cout << *itr;
  cout << endl;

  return 0;
}