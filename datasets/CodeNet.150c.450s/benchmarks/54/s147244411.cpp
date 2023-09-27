#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

string komoji(string& befo) {
  string komo;
  transform(befo.begin(), befo.end(), befo.begin(), ::tolower);
  return befo;
}

int main() {
  string target;
  bool loop = true;
  cin >> target;
  target = komoji(target);
  int counter = 0;
  while (loop) {
    string line;
    getline(cin, line);
    if (line == "END_OF_TEXT") {
      loop = false;
      continue;
    }
    line = komoji(line);
    istringstream iss(line);
    string factor;

    while (getline(iss, factor, ' ')) {
      if (factor == target) {
        counter++;
      }
    }
  }
  cout << counter << endl;
}