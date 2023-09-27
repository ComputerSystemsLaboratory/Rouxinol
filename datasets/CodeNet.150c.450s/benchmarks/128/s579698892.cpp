#include<iostream>
#include<string>
using namespace std;
int main()
{
  string str;
  int i;
  cin >> str;
  i=str.length();
  while(i!=0)
  {
    cout << str[i-1];
    i--;
  }
    cout << endl;
    return 0;
}