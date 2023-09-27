#include <algorithm>  // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <bitset>     // bitset
#include <cctype>     // isupper, islower, isdigit, toupper, tolower
#include <cstdint>    // int64_t, int*_t
#include <cstdio>     // printf
#include <deque>      // deque
#include <iomanip>    // fixed, setprecision
#include <iostream>   // cout, endl, cin
#include <map>        // map
#include <queue>      // queue, priority_queue
#include <set>        // set
#include <stack>      // stack
#include <string>     // string, to_string, stoi
#include <tuple>      // tuple, make_tuple
#include <unordered_map>  // unordered_map
#include <unordered_set>  // unordered_set
#include <utility>        // pair, make_pair
#include <vector>         // vector
using namespace std;

int main() {
  int64_t N, Q, s = 0, b, c, r;
  map<int64_t, int64_t> cnt{};
  cin >> N;
  vector<int64_t> A(N);

  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    cnt[A[i]]++;
    s += A[i];
  }

  cin >> Q;
  for (int i = 0; i < Q; i++) {
    cin >> b >> c;
    r = cnt[b];
    s += (c * r) - (b * r);
    cnt[b] -= r;
    cnt[c] += r;
    cout << s << endl;
  }
}
