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
  int n, dh, dm, ds, ah, am, as, dtime, atime;
  string dep, arr, num = "0123456789";
  while (cin >> n, n) {
    int cnt[24*60*60] = {0};
    while (n--) {
      cin >> dep >> arr;
      dh = (int)num.find(dep[0])*10 + (int)num.find(dep[1]);
      dm = (int)num.find(dep[3])*10 + (int)num.find(dep[4]);
      ds = (int)num.find(dep[6])*10 + (int)num.find(dep[7]);
      ah = (int)num.find(arr[0])*10 + (int)num.find(arr[1]);
      am = (int)num.find(arr[3])*10 + (int)num.find(arr[4]);
      as = (int)num.find(arr[6])*10 + (int)num.find(arr[7]);
      dtime = (dh*60+dm)*60+ds;
      atime = (ah*60+am)*60+as;
      for (int i = dtime; i < atime; i++) {
        cnt[i]++;
      }
    }
    int max = 0;
    for (int i = 0; i < 24*60*60; i++) {
      if (max < cnt[i]) {
        max = cnt[i];
      }
    }
    cout << max << el;
  }
}