#include <iostream>
#include <vector>

#define ll long long

const int MAXW = 10'000;
const int MAXK = 100'000;

int load(int p, int k, const std::vector<int> &w) {
  // p トラック一台分の積載量
  // k トラックの数
  // w 荷物
  // return 積載できた荷物の数 0 <= n
  int i{}, n = w.size();
  for (int j = 0; j < k; j++) {
    ll s{}; // 積み込み中の荷物
    while (s + w[i] <= p) {
      s += w[i++];
      if (i == n) {
        return n;
      }
    }
  }
  return i;
}

int main() {
  // n 荷物の数
  // k トラックの数
  int n, k;
  std::cin >> n >> k;

  // w 荷物の配列
  std::vector<int> w(n);
  for (int i = 0; i < n; i++) {
    std::cin >> w[i];
  }

  ll l = 0, r = MAXW * MAXK, m;
  while (r - l > 1) {
    m = (r + l) / 2;
    if (load(m, k, w) >= n) // n個の荷物が詰めたらちょうどいいか、トラックの台数が多い
      r = m;
    else
      l = m;
  }

  std::cout << r << std::endl;
}

