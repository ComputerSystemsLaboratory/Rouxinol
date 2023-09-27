#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, p;
  while (cin >> n >> p && n) {
    int have[50], cup = p, turn = 0;

    fill(have, have + n, 0);
    while (true) {
      
      if (cup == 1 && have[turn] == p - 1) {
	cout << turn << endl;
	break;
      }

      if (cup == 0)
	swap(cup, have[turn]);

      else
	have[turn]++, cup--;

      turn = (turn + 1) % n;
    }
  }
}