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
int num = 0;

void pretty_print(vector<int> &A) {
  cout << A[0];
  rep (i, A.size()-1) cout << ' ' << A[i+1];
  cout << endl;
}

void sort(vector<int> &A) {
  rep (i, A.size()) {
    for (int j = A.size() - 1; j > i; j--) {
      if (A[j] < A[j-1]) {
        swap(A[j], A[j-1]);
        num++;
      }
    }
  }
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep (i, N) cin >> A[i];
  sort(A);

  pretty_print(A);
  cout << num << endl;
}