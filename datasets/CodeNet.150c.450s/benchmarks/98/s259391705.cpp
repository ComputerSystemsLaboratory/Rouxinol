#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, n) for(int i = (a); i < (n); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define debug(x) cerr << #x << ": " << x << '\n'

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true) {
    int n, m;
    int s1[110];
    int s2[110];
    int sumS1 = 0;
    int sumS2 = 0;
    int min = 999999999;
    int hozi = -1, hozj = -1, hozsum1, hozsum2;
    cin >> n >> m;
    if(n + m == 0) break;

    rep(i, n) {
      cin >> s1[i];
      sumS1 += s1[i];
    }
    hozsum1 = sumS1;
    rep(i, m) {
      cin >> s2[i];
      sumS2 += s2[i];
    }
    hozsum2 = sumS2;

    rep(i, n) {
      rep(j, m) {
        sumS1 -= s1[i];
        sumS1 += s2[j];

        sumS2 -= s2[j];
        sumS2 += s1[i];

        if(sumS1 == sumS2) {
          if(s1[i] + s2[j] < min) {
            min = s1[i] + s2[j];
            hozi = i;
            hozj = j;
          }
        } else {
          sumS1 = hozsum1;
          sumS2 = hozsum2;
        }
      }
    }
    if(hozi + hozj == -2) {
      cout << hozi << endl;
    } else {
      cout << s1[hozi] << " " << s2[hozj] << endl;
    }
    hozi = -1;
    hozj = -1;
  }
}

