#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define say(args) cout << (args) << endl
#define rep(i, a) for (int i = 0; i < a; i++)

using namespace std;

int main() {
  int num;
  cin >> num;
  while (num != 0) {
    int count = 0;
    for (int i = 1; i < num - 1; i++) {
      int sum = 0;
      for (int j = i; j <= (int) ceil( (double) num / 2 ); j++) {
        sum += j;
        if (sum == num) {
          count += 1;
          break;
        }
      }
    }
    say(count);
    cin >> num;
  }
}