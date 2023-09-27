#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdint>
#include <string>

using namespace std;

int main() {
  string line;
  getline(cin, line);
  for (int i = 0; i < line.size(); ++i) {
    char c = line[i];
    if (isupper(c)) {
      c = tolower(c);
    } else if (islower(c)) {
      c = toupper(c);
    }
    line[i] = c;
  }
  cout << line << endl;
}