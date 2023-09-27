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

#define MAX 1000000

void makelist(int *list, int x) {
  for (int i = x; i <= MAX; i++) {
    list[i] = min(list[i], list[i-x]+1);
  }
}

int main() {
  int list1[MAX+10], list2[MAX+10], x, n;
  for (int i = 1; i <= MAX; i++) {
    list1[i] = list2[i] = INF;
  }
  for (int i = 1; ; i++) {
    x = i*(i+1)*(i+2)/6;
    if (x >= MAX) break;
    makelist(list1, x);
    if (x & 1) makelist(list2, x);
  }
  while (cin >> n, n) {
    cout << list1[n] << " " << list2[n] << el;
  }
}