#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int n, r;
  while (cin >> n >> r && n + r) {
    auto deck = vector<int>(n);
    for (int i = 0; i < n; i++) deck[i] = n-i;
    for (int i = 0; i < r; i++) {
      int p, c; //3 1
      cin >> p >> c;
      auto temp = vector<int>(c);
      for (int j = 0; j < c; j++) temp[j] = deck[p-1+j];
      for (int j = c+p-2; j >= c; j--) deck[j] = deck[j-c];
      for (int j = 0; j < c; j++) deck[j] = temp[j];
    }
    cout << deck[0] << endl;
  }
}

