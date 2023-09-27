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
#define dbg(x) cerr << #x << ": " << x << endl;
#define dbg2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define dbg3(x, y, z) cerr<<"("<<#x<<", "<<#y<<", "<<#z<<") = "<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
#define dbgB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

int N, W;
int v[111], weight[111];
int dp[111][11111];

void print() {
   repp (i, 1, N+1) {
      for (int w = 0; w <= W; w++) {
         printf("%3d ", dp[i][w]);
      }
      puts("");
   }
}

int main() {
   cin >> N >> W;
   rep (i, N) {
      cin >> v[i+1] >> weight[i+1];
   }

   repp (i, 1, N+1) {
      for (int w = 0; w <= W; w++) {
         dp[i][w] = dp[i-1][w];
         if (w >= weight[i]) {
            dp[i][w] = max(dp[i-1][w], dp[i-1][w-weight[i]]+v[i]);
         }
      }
   }

   cout << dp[N][W] << endl;

   return 0;
}
