#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define FOR2(i, z, n) for(int i=z; i<n; i++)

int main() {
  int change, nbr_coins;
  cin >> change >> nbr_coins;

  set<int> coins_set;
  FOR(i, nbr_coins) {
    int coin;
    cin >> coin;
    coins_set.insert(coin);
  }

  vector<int> changes_list(change);

  changes_list[0] = 1;

  FOR2(i, 1, change) {
    if (coins_set.find(i + 1) != coins_set.end()) {
      changes_list[i] = 1;
    } else {
      int min_coins_nbr = 100000;
      for (int j = 0, y = i - 1; j <= y; j++, y--) {
        if (changes_list[j] + changes_list[y] < min_coins_nbr) {
          min_coins_nbr = changes_list[j] + changes_list[y];
        }
      }
      changes_list[i] = min_coins_nbr;
    }
  }

  cout << changes_list[change - 1] << endl;
}
