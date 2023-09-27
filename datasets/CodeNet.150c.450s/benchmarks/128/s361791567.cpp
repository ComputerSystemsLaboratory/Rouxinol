#include<iostream>
#include<string>
using namespace std;

int main(){
  int len;
  string str;

  cin >> str;

  len=str.size();

  for (int i=1; i<=len; i++){
    cout << str.substr(len-i,1);
  }

  cout << endl;
  return 0;
}