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
  int n;
  scanf("%d", &n);
  ll res = 1LL;
  for (int i = 1; i <= n; i++)
    res *= i;
  printf("%ld\n", res);
}