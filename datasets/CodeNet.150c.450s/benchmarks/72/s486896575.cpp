#include <iostream>
#include <string>
using namespace std;

int main() {
  string line;
  getline(cin, line);
  for(unsigned int i=0; i<line.length(); i++) {
    if('a' <= line[i] && line[i] <= 'z') {
      line[i] -= 32;
    }
    else if('A' <= line[i] && line[i] <= 'Z') {
      line[i] += 32;
    }
  }
  cout << line << endl;
  return 0;
}