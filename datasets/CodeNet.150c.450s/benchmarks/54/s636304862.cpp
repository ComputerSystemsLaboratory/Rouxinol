#include <iostream>
#include <string>

using namespace std;

int main() {
  string str, target;
  cin >> target;
  for(int i=0; i<target.length(); i++) {
    if('A' <= target[i] && target[i] <= 'Z') {
      target[i] += 32;
    }
  }

  int counter = 0;
  while(cin >> str) {
    if(str == "END_OF_TEXT") {
      break;
    }
    for(int i=0; i<str.length(); i++) {
      if('A' <= str[i] && str[i] <= 'Z') {
        str[i] += 32;
      }
    }
    if(str == target) counter++;
  }
  cout << counter << endl;
  return 0;
}