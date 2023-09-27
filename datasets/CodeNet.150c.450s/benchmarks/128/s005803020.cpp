#include <iostream>
#include <string>
using namespace std;

int main() {
  string strin;
  string strout;

  cin >> strin;
  int len = strin.length();
  for(int i=0; i<len; i++) {
    strout += strin[len-i-1];
  }
  cout << strout << endl;

  return 0;
}