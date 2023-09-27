#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  string s;
  map<string, int> word;

  while(cin >> s) {
    if(word.find(s) == word.end()) {
      word.insert(make_pair(s, 1));
    } else {
      word[s]++;
    }
  }

  string longs, manys;
  int longn = 0, manyn = 0;

  map<string, int>::iterator it = word.begin();
  while(it != word.end()) {
    if(it->first.length() > longn) {
      longn = it->first.length();
      longs = it->first;
    }
    if(it->second > manyn) {
      manyn = it->second;
      manys = it->first;
    }
    it++;
  }
  cout << manys << ' ' << longs << endl;
}