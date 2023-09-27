#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  cin >> str;

  int a = str.size();
  char swap;
  for(int i = 0; i < a/2; i++){
    swap = str[i];
    str[i] = str[a-i-1];
    str[a-i-1] = swap;
  }

  cout << str << endl;
}