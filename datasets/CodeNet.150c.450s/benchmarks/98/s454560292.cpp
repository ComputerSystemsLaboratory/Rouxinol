#include <algorithm>
#include <iostream>
#include <limits.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1

using namespace std;

int main() {
  int n, m, sum_t, sum_h, dif, res_t, res_h;
  bool flag;
  while (cin >> n >> m, n | m) {
    vector<int> taro, hanako;
    int tmp;
    sum_t = 0;
    sum_h = 0;
    for (int i = 0; i < n; i++) {
      cin >> tmp;
      taro.push_back(tmp);
      sum_t += tmp;
    }
    for (int i = 0; i < m; i++) {
      cin >> tmp;
      hanako.push_back(tmp);
      sum_h += tmp;
    }
    flag = false;
    if (!((sum_t-sum_h) & 1)) {
      res_t = INF;
      res_h = INF;
      dif = sum_t - sum_h;
      for (int i = 0; i < taro.size(); i++) {
        for (int j = 0; j < hanako.size(); j++) {
          if (dif == 2*(taro[i] - hanako[j]) && taro[i] + taro[j] < res_t + res_h) {
            res_t = taro[i];
            res_h = hanako[j];
            flag = true;
          }
        }
      }
    }
    if (flag) cout << res_t << " " << res_h << el;
    else cout << "-1" << el;
  }
}