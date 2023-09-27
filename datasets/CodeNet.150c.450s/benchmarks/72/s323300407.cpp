#include<iostream>
#include<string>
using namespace std;
int main() {
  string str;
  while(getline(cin, str)) {
    for(string::iterator it = str.begin(); it != str.end(); ++it) {
      char r = *it;
    if (r >= 'A' && r <= 'Z') {
      cout << (char)(r+32) ;
    } else if (r >= 'a' && r <= 'z') {
      cout << (char)(r-32);
     } else {
      cout << r;
     }
  }
  }
  cout << endl;
}