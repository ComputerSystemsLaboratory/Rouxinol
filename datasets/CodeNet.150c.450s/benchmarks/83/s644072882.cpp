#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
static const int MAXW = 10000;

struct Item {
  int value, weight;
};

int solve_knapsack(vector<Item> items, int maxw) {
  int max_values[MAXW + 1] = {0};
  int pre[MAXW + 1] = {0};
  for (auto item : items) {
    for (int j = 0; j <= maxw; j++) {
      max_values[j] = j < item.weight ? pre[j] :
        max(pre[j - item.weight] + item.value, pre[j]);
    }
    swap(pre, max_values);
  }

  return pre[maxw];
}

int main() {
  int nitem, maxw;
  vector<Item> items;
  cin >> nitem >> maxw;
  for (int i = 0; i < nitem; i++) {
    int value, weight;
    cin >> value >> weight;
    items.push_back(Item{value, weight});
  }

  cout << solve_knapsack(items, maxw) << endl;
}