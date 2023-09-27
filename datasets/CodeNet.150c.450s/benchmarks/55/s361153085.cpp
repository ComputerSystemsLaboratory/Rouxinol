#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream>
using namespace std;

int main(void){
  string input;
  bool loop = true;
  while (loop) {
    cin >> input;
    if (input == "0") {
      loop = false;
      continue;
    }
    unsigned int sum = 0;
    for (int i = 0; i < input.length() ; i++) {
      int num;
      string numstring;
      numstring = input[i];
      stringstream ss;
      ss << numstring;
      ss >> num;

      sum += num;
    }
    cout << sum << endl;
  }

  return 0;
}