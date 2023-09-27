#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n + m == 0) break;
    vector<int> cards_taro(n);
    vector<int> cards_hanako(m);
    int sum_taro = 0;
    int sum_hanako = 0;
    for (int i= 0; i < n; i++) {
      int s;
      cin >> s;
      cards_taro[i] = s;
      sum_taro += s;
    }
    for (int i = 0; i < m; i++) {
      int s;
      cin >> s;
      cards_hanako[i] = s;
      sum_hanako += s;
    }
    int swap_min = 10000;
    pair<int, int> best_swap;
    
    for (int i = 0; i < n; i++) {
      sum_taro -= cards_taro[i];
      sum_hanako += cards_taro[i];
      for (int j = 0; j < m; j++) {
        sum_taro += cards_hanako[j];
        sum_hanako -= cards_hanako[j];
        if (sum_taro == sum_hanako) {
          if (cards_taro[i] + cards_hanako[j] < swap_min) {
            swap_min = cards_taro[i] + cards_hanako[j];
            best_swap.first = cards_taro[i];
            best_swap.second = cards_hanako[j];
          }
        }
        sum_taro -= cards_hanako[j];
        sum_hanako += cards_hanako[j];
      }
      sum_taro += cards_taro[i];
      sum_hanako -= cards_taro[i];
    }
    if (swap_min == 10000) {
      cout << -1 << endl;
    } else {
       cout << best_swap.first << " " << best_swap.second << endl;
    }
  }
  return 0;
}