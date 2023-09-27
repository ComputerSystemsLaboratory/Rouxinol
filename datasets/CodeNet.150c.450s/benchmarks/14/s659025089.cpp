#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int n; cin >> n;

  int i = 1;
  while (++i <= n) {
    int x = i;
    if (x % 3 == 0) {
      cout << " " << i;
    } else {
      while (x) {
	if (x % 10 == 3) {
	  cout << " " << i;
	  break;
	} else {
	  x /= 10;
	}
      }
    }
  }
  cout << endl;
  return 0;
}