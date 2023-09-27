#include <iostream>
#include <string>
using namespace std;

int main()
{
 string str;
 cin >> str;

 for(int i=0; i<str.size()/2; i++){
  char tmp = str[i];
  str[i] = str[str.size()-(i+1)];
  str[str.size()-(i+1)] = tmp;
 }

 cout << str << '\n';

 return 0;
}