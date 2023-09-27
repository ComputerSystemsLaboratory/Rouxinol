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

void pretty_print(vector<int> &A) {
  cout << A[0];
  rep (i, A.size()-1) cout << ' ' << A[i+1];
  cout << endl;
}

void isort(vector<int> &A) {
  rep (i, A.size()) {
    int key = A[i];
    int j = i - 1;

    while (j >= 0 && A[j] > key) {
      A[j+1] = A[j];
      j--;
    }

    A[j+1] = key;

    pretty_print(A);
  }
}


int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep (i, N) cin >> A[i];

  isort(A);
}