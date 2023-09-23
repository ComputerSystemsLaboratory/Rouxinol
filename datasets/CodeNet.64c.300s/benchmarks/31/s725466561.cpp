#include <iostream>

using namespace std;

bool s[31];

int main() {
  for (int i = 0; i < 28; i++) {
    int x;
    cin >> x;
    s[x] = true;
  } 
  for (int x = 1; x <= 30; x++)
    if (!s[x])
      cout << x << endl;
  return 0;
}