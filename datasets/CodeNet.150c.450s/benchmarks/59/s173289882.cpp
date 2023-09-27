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
  for (int i = 1; i < A.size(); i++) cout << ' ' << A[i];
  cout << endl;
}

void isort(vector<int> &A) {
  for (int i = 1; i < A.size(); i++) {
    pretty_print(A);
    // choice base element
    int key = A[i];

    int j = i - 1;

    // if i = 3
    //
    // while: 
    // 1: j = 2 A[3] = A[2] if A[j] > key
    // 2: j = 1 A[2] = A[1] if A[j] > key
    // 3: j = 0 A[1] = A[0] if A[j] > key
    while (j >= 0 && A[j] > key) {
      A[j+1] = A[j];
      j--;
    }

    A[j+1] = key;
  }
}


int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep (i, N) cin >> A[i];

  isort(A);
  pretty_print(A);
}