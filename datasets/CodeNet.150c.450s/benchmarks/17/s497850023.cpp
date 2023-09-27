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
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  sort(a.rbegin(), a.rend());
  for (int i = 0; i < 4; i++) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[4]);
}