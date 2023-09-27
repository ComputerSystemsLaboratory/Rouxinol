#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
using namespace std;

#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
using P = pair<long long, int>;

long long V, E;
long long d[100][100];
const long long INF = 100000000000000;
bool b[100][100];

int main() {
  cin >> V >> E;

  rep(i, V) {
    rep(j, V) {
      if(i == j) d[i][j] = 0;
      else d[i][j] = INF;
    }
  }

  rep(i, E) {
    long long x, y, temp;
    cin >> x >> y >> temp;
    d[x][y] = temp;
    b[x][y] = true;
  }
  
  rep(k, V) {
    rep(i, V) {
      rep(j, V) {

        d[i][j] = min(d[i][k] + d[k][j], d[i][j]);
        // cout << d[i][j] << " " << k << " " << i << " " << j << endl;
      }
    }
  }

  rep(i, V) {
    rep(j, V) {
      if(i == j && d[i][j] < 0) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
      }
    }
  }


  rep(i, V) {
    rep(j, V) {
      if(d[i][j] < 1e10) {
        cout << d[i][j];
      } else {
        cout << "INF";
      }
      if(j != V - 1) cout << " ";
      else cout << endl;
    }
  }
  return 0;
}
