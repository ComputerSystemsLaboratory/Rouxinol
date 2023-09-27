#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define pb push_back

typedef vector<int> vi;
typedef vector<vector<int> > vvi;

int lcs(string a, string b) {
  vvi len(a.length()+1, vi(b.length()+1, 0));
  for (int ia = 1 ; ia <= a.length() ; ia++) {
    for (int ib = 1 ; ib <= b.length() ; ib++) {
      if (a[ia-1] == b[ib-1]) {
        len[ia][ib] = len[ia-1][ib-1]+1;
      } else {
        len[ia][ib] = max(len[ia][ib-1], len[ia-1][ib]);
      }
    }
  }
  return len[a.length()][b.length()];
}

int main() {
  int t;
  cin >> t;
  vi results;
  for (int dataset = 0 ; dataset < t ; dataset++) {
    string a, b;
    cin >> a;
    cin >> b;
    results.pb(lcs(a, b));
  }

  for (int it = 0 ; it < t ; it++) {
    printf("%d\n", results[it]);
  }

  return 0;
}