#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

int main() {
  int n, num1, num2, num3, prev;
  string mcxi1, mcxi2, mcxi3;
  string mcxi[4] = {"m", "c", "x", "i"};
  string num[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  cin >> n;
  while (n--) {
    cin >> mcxi1 >> mcxi2;
    num1 = 0, num2 = 0, prev = 1;
    for (int i = 0; i < mcxi1.length(); i++) {
      if (mcxi1[i] == 'm') num1 += prev*1000, prev = 1;
      else if (mcxi1[i] == 'c') num1 += prev*100, prev = 1;
      else if (mcxi1[i] == 'x') num1 += prev*10, prev = 1;
      else if (mcxi1[i] == 'i') num1 += prev;
      else prev = (int)(mcxi1[i] - '0');
    }
    prev = 1;
    for (int i = 0; i < mcxi2.length(); i++) {
      if (mcxi2[i] == 'm') num2 += prev*1000, prev = 1;
      else if (mcxi2[i] == 'c') num2 += prev*100, prev = 1;
      else if (mcxi2[i] == 'x') num2 += prev*10, prev = 1;
      else if (mcxi2[i] == 'i') num2 += prev;
      else prev = (int)(mcxi2[i] - '0');
    }
    num3 = num1 + num2;
    mcxi3 = "";
    for (int i = 0; i < 4; i++) {
      if (num3 % 10 == 1) {
        mcxi3 = mcxi[3-i] + mcxi3;
      } else if (num3 % 10 != 0) {
        mcxi3 = num[num3%10] + mcxi[3-i] + mcxi3;
      }
      num3 /= 10;
    }
    cout << mcxi3 << el;
  }
}