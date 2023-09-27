#include <iostream>
#include <string>
using namespace std;
int main() {
  char a;
  string str;
  cin >> str;
  for (int i = 0; i < str.size()-1-i; i++) {
    a = str[i];
    str[i] = str[str.size()-1-i];
    str[str.size()-1-i] = a;
  }
  cout << str << endl;
}