#include <iostream>
#include <ctype.h>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
  string input;
  string output;
  getline(cin, input);

  for (int i = 0; i < input.length() ; i++) {
    string convert;
    convert = input[i];
    if (isupper(input[i])) {
      transform(convert.begin(), convert.end(), convert.begin(), ::tolower);
    } else if (islower(input[i])) {
      transform(convert.begin(), convert.end(), convert.begin(), ::toupper);
    }
    output += convert;
  }
  cout << output << endl;
  return 0;
}