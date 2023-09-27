#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  string str;
  getline(cin,str);
  reverse(str.begin(),str.end());
  cout << str<<endl;
  return 0;
}