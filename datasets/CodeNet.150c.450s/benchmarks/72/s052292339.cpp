#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string in, out; getline(cin, in); out = "";

  int diff = 'a' - 'A';
  for (string::iterator itr = in.begin();
       itr != in.end(); itr++) {
    char c = *itr;
    if ('a' <= c && c <= 'z') {
      c = c-diff;
    } else if ('A' <= c && c <= 'Z') {
      c = c+diff;
    }
    out += c;
  }
  cout << out << endl;
  return 0;
}