#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string str;
  cin >> str;
  for(int i=str.size(); i--;){
    cout << str[i];
  }
  cout << endl;

  return 0;
}