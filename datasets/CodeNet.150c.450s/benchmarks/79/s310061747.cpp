#include <algorithm>
#include <iostream>
#include <cstdio>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;

#define ISEQ(c) (c).begin(), (c).end()
typedef long long ll;

int main() {
  while (true) {
    int n, l;
    cin >> n >> l;
    if (n == 0) break;
    int cards[n], next[n];
    for (int i = n; i > 0; i--) {
      cards[n-i] = i;
    }

    for (int i = 0; i < l; i++) {
      int p, c;
      cin >> p >> c;
      for (int j = p-1; j < p+c-1; j++) {
	next[j-p+1] = cards[j];
      }
      for (int j = 0; j < p-1; j++) {
	next[c+j] = cards[j];
      }
      for (int j = p+c-1; j < n; j++) {
	next[j] = cards[j];
      }
      for (int j = 0; j < n; j++) {
	cards[j] = next[j];
      }
    }
    cout << cards[0] << endl;
  }
}