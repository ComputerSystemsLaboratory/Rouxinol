#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void print_vec(vector<int> vec) {
  cout << "[";
  for (int i = 0; i < vec.size(); i++) {
    if (i) {
      cout << ", ";
    }
    cout << vec.at(i);
  }
  cout << "]...size: " << vec.size() << endl;
}

int main() {
  vector<int> abses;

  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }

    vector<int> vec(n);
    rep(i, n) { cin >> vec.at(i); }
    int min_abs = 1001001001;

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int current_abs = abs(vec.at(i) - vec.at(j));
        min_abs = min(min_abs, current_abs);
      }
    }

    abses.push_back(min_abs);
  }

  for (auto &&i : abses) {
    printf("%d\n", i);
  }
}

