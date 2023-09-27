# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

// namespace utils
namespace utils{
  template <typename T> void print(vector<vector<T>> mat) {
    rep (i, mat.size()) {
      rep (j, mat[0].size()) cout << mat[i][j] << ' ';
      cout << endl;
    }
  }

  template <typename T> void print(vector<T> v) {
    rep (i, v.size()) cout << v[i] << ' ';
    cout << endl;
  }
// end namespace utils
}


string int2mcxi(int n) {
  string res = "";

  vector<int> base = {1000, 100, 10, 1};
  vector<string> sur = {"m", "c", "x", "i"};

  rep (i, 4) {
    int k = n / base[i];

    if (k > 0) {
    res += k == 1 ? sur[i] : to_string(k) + sur[i];
    }

    n -= (n / base[i]) * base[i];
  }

  return res;
}

int mcxi2int(string mcxi) {
  int res = 0;
  string prfx;

  rep (k, mcxi.size()) {
    if (mcxi[k] == 'm') {
      res += prfx == "" ? 1000 : 1000 * stoi(prfx);
      prfx = "";
    }
    else if (mcxi[k] == 'c') {
      res += prfx == "" ? 100 : 100 * stoi(prfx);
      prfx = "";
    }
    else if (mcxi[k] == 'x') {
      res += prfx == "" ? 10 : 10 * stoi(prfx);
      prfx = "";
    }
    else if (mcxi[k] == 'i') {
      res += prfx == "" ? 1 : 1 * stoi(prfx);
      prfx = "";
    }
    else {
      prfx += mcxi[k];
    }
  }
  return res;
}


int main() {

  int n;
  cin >> n;

  rep (_, n) {
    string ans_mcxi;
    string mcxi;

    int ans_int = 0;
    cin >> mcxi;
    ans_int += mcxi2int(mcxi);

    cin >> mcxi;
    ans_int += mcxi2int(mcxi);

    ans_mcxi = int2mcxi(ans_int);
    cout << ans_mcxi << endl;
  }
}