# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> queue(n);
  vector<string> label(n);

  rep(i, n) cin >> label[i] >> queue[i];

  int head = 0;
  int tail = n;
  int time = 0;

  while (head < tail) {
    // if queue[0] != 0; then run process
    // if (queue[head] < q) cout << label[head] << ' ' << time + queue[head] << endl;

    if (queue[head] - q > 0) {
      queue.push_back(queue[head] - q);
      label.push_back(label[head]);
      tail++;
      time += q;
    }
    else {
      time += queue[head];
      queue[head] = 0;
      cout << label[head] << ' ' << time << endl;
    }

    head++;
  }
}