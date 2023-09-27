#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define uniqueV(x) sort(x.begin(), x.end()); x.erase(unique(x.begin(), x.end()), x.end());
#define rep(i, n) for (int (i) = (0); (i) < (n); ++(i))
#define repp(i, m, n) for (int (i) = (m); (i) < (n); ++(i))
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define debug3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define debugB(x, y) cerr<<#x<<": "<<bitset<y>(x) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------
int N, turn;
int d[111], f[111];
vector<vector<int>> G;

void dfs(int from) {
   d[from] = ++turn;
   for (int to : G[from]) {
      if (!d[to]) dfs(to);
   }
   f[from] = ++turn;
}

int main() {
   // 入力
   cin >> N;
   G = vector<vector<int>>(N);
   rep (i, N) {
      int u, k;
      cin >> u >> k;
      u--;
      rep (j, k) {
         int a;
         cin >> a;
         a--;
         G[u].push_back(a);
      }
   }

   rep (i, N) {
      if (!d[i]) dfs(i);
   }

   rep (i, N) {
      printf("%d %d %d\n", i+1, d[i], f[i]);
   }

   return 0;
}
