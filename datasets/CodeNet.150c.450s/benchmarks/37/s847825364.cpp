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


// %% begin matrix %%

typedef vector<double> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}


mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

// %% end matrix %%


vec jordan(mat &A, vec &b) {
  int n = A.size();

  // ?????§?????°??????
  mat B(n, vec(n+1));
  rep (i, n) {
    rep (j, n) {
      B[i][j] = A[i][j];
    }
    B[i][n] = b[i];
  }


  rep (i, n) {
    int pivot = i;

    // ?????????
    for (int j = i; j < n; j++) {
      if (abs(B[j][i]) > abs(B[pivot][i])) {
        pivot = j;
      }
    }
    swap(B[i], B[pivot]);

    if (abs(B[i][i]) < 0.0000001) {
      return vec();
    }

    for (int j = i+1; j <= n; j++) B[i][j] /= B[i][i];
    rep (j, n) {
      if (i != j) {
        for (int k = i+1; k <= n; k++) {
          B[j][k] -= B[j][i] * B[i][k];
        }
      }
    }
  }

  vec x(n);
  rep (i, n) {
    x[i] = B[i][n];
  }

  return x;
}




int main() {
  double a, b, c, d, e, f;

  while (cin >> a >> b >> c >> d >> e >> f) {

    mat A = {
      {a, b},
      {d, e}
    };

    vec B = {
      c, f
    };

    vec x = jordan(A, B);
    // cout << x[0] << " " << x[1] << endl;
    printf("%4.3f %4.3f\n", x[0], x[1]);
  } 
}