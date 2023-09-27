#include<iostream>
#include<string>
using namespace std;

int main(){
  string str, revStr;
  
  cin >> str;
  for(int i = 0; i < str.length(); i++) {
    revStr.push_back(str[str.length() - 1 - i]);
  }
  cout << revStr << endl;
  return 0;
}