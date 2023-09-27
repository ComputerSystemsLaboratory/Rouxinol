#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
  int a, b;
  std::string sep;
  cin >> a >> b;
  if(a == b) {
      sep = "==";
  } else if(a > b) {
      sep = ">";
  } else {
      sep = "<";
  }
  cout << "a " << sep << " b" << endl;
  return 0;
}

