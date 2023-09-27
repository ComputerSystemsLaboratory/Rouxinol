/*
 * chain_matrix.cpp
 *
 *  Created on: 2017/07/11
 *      Author: LitMc
 */

//#define MYDEBUG
#include <bits/stdc++.h>

#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
#define ifcin(x)
#endif
#define ll long long
#define ull unsigned long long
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)
#define REP(i, from, to) for(int i=from; i<=to; ++i)
#define EPS = 1e-14;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::max;
using std::min;
using std::swap;
using std::string;
using std::fill;
using std::pair;
using std::sort;
using std::reverse;
using std::pair;
using std::greater;
using std::priority_queue;
using std::ostream;

template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i] << endl;
  }
  return out;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  out << "[";
  size_t last = v.size() - 1;
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i];
    if (i != last) {
      out << ",";
    }
  }
  out << "]";
  return out;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) {
  out << "(" << p.first << ", " << p.second << ")";
  return out;
}

typedef pair<int, int> P;
bool cmp(const P &p1, const P &p2) {
  if (p1.first == p2.first) {
    return p1.second > p2.second;
  } else {
    return p1.first < p2.first;
  }
}
typedef pair<int, int> P;
static const int MAX_N = 110;
static const int INF = 100000000;
int n, r, c;
P M[MAX_N];
int dp[MAX_N][MAX_N];

//dp[i][j]: M[i]??????M[j]?????§??????????????????????°??????°
//dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + prod)
//k = [i, j)
//prod = M[i].row * M[k].col * M[j].col

void solve() {
  cin >> n;
  rep(i,0,n)
  {
    cin >> M[i].first >> M[i].second;
    dp[i][i] = 0;
  }
  for (int i = 0; i + 1 < n; ++i) {
    dp[i][i + 1] = M[i].first * M[i].second * M[i + 1].second;
    dbp4(i, M[i], M[i + 1], dp[i][i + 1]);
  }
  for (int num_matrix = 3; num_matrix <= n; ++num_matrix) { //number of matrix A*B*C -> 3
    for (int i = 0, j = i + num_matrix - 1; j < n; ++i, ++j) {
      dbp4(i, M[i], M[j], dp[i][j]);
      int mini = INT_MAX;
      for (int k = i; k + 1 <= j; ++k) {
        int prod = M[i].first * M[k].second * M[j].second;
        mini = min(mini, dp[i][k] + dp[k + 1][j] + prod);
      }
      dp[i][j] = mini;
      dbp4(i, M[i], M[j], dp[i][j]);dbp("----------");
    }
  }
  cout << dp[0][n - 1] << endl;
}

int main() {
  solve();
}