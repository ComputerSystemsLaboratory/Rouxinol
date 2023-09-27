#include <unordered_set>
#include <string>
#include <iostream>

using namespace std;

int main() {
  typedef unordered_set<string> set_t;
  set_t dict;
  int n;
  string cmd; //command
  string word; //word to store
  unordered_set<string>::const_iterator got; //for find

  cin >> n; // number of inputs
  for (int i = 0; i < n; ++i) {
    cin >> cmd >> word;

    if (cmd[0] == 'i') { // if insert
      dict.insert(word);
    } else {
      got = dict.find(word);
      if (got == dict.end()) {
	cout << "no" << endl;
      } else {
	cout << "yes" << endl;
      }
    }
  }
}
	 