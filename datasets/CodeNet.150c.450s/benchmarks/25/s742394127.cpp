#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int main(void){
  string input;
  bool loop = true;
  map<char, int> mp;
  string letters = "abcdefghijklmnopqrstuvwxyz";
  char ch;

  for (int i = 0; i < letters.length(); i++) {
    mp[letters[i]] = 0;
  }

  while (cin >> ch) {
    string input;
    input = ch;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    int num = mp[input[0]];
    num += 1;
    mp[input[0]] = num;
  }

  for (int i = 0; i < letters.length(); i++) {
    cout << letters[i] << " : " << mp[letters[i]] << endl;
  }
  return 0;
}