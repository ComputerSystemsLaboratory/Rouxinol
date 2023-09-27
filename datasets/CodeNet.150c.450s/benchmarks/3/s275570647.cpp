#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

int main()
{
  string s;
  cin >> s;
  cin.get();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string command;
  int start, finish;
  while (cin >> command >> start >> finish) {
    if (command == "replace") {
      string replacement;
      cin >> replacement;
      s.replace(start, finish - start + 1, replacement);
    } else if (command == "print") {
      cout << s.substr(start, finish - start + 1) << endl;
    } else if (command == "reverse") {
      reverse(&s[start], &s[finish+1]); 
    }
  }
}

