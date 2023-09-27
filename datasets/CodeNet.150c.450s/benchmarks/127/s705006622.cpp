# include <bits/stdc++.h>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;

template <typename T>
void show_all(T t) {
  rep (i, t.size()) {
    rep (j, t[0].size()) {
      cout << t[i][j];
    }
    cout << endl;
  }
}

int main() {

  int m;
  cin >> m;
  string ld, rd;
  string nor_d, rev_d;

  rep (i, m) {
    cin >> nor_d;
    map<string, int> res;

    rep (j, nor_d.size()-1) {
      ld = nor_d.substr(0, j+1);
      rd = nor_d.substr(j+1, nor_d.size()-j-1);

      string tmp_ld = ld;
      string tmp_rd = rd;
      reverse(tmp_ld.begin(), tmp_ld.end());
      reverse(tmp_rd.begin(), tmp_rd.end());

      res[ld+rd] = 1;
      res[ld+tmp_rd] = 1;
      res[tmp_ld+rd] = 1;
      res[tmp_ld+tmp_rd] = 1;

      res[rd+ld] = 1;
      res[rd+tmp_ld] = 1;
      res[tmp_rd+ld] = 1;
      res[tmp_rd+tmp_ld] = 1;
    }

    cout << res.size() << endl;
  }
}