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
  int a, L, res1, res2, res3;
  bool flag;
  while (cin >> a >> L, a | L) {
    vector<int> a_list;
    while (1) {
      a_list.pb(a);
      int tmp1 = 0, tmp2 = 0;
      int num[L];
      for (int i = 0; i < L; i++) {
        num[i] = a%10;
        a /= 10;
      }
      sort(num, num+L);
      for (int i = 0; i < L; i++) {
        tmp1 = tmp1*10 + num[L-i-1];
        tmp2 = tmp2*10 + num[i];
      }
      a = tmp1 - tmp2;
      flag = true;
      for (int i = 0; i < a_list.size(); i++) {
        if (a_list[i] == a) {
          res1 = i;
          res2 = a_list[i];
          res3 = a_list.size()-i;
          flag = false;
        }
      }
      if (!flag) break;
    }
    cout << res1 << " " << res2 << " " << res3 << el;
  }
}