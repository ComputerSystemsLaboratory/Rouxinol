#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int i = 1; // counter
  int x; // input

  while(cin >> x) {
    if (x == 0) break;
    cout << "Case " << i << ": " << x << endl;
    i++;
  }
  return 0;
}