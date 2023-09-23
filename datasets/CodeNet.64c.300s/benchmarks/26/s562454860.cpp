#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector<vector<int>>
#define vec vector
#define pq priority_queue
#define all(v) (v).begin(), (v).end()
#define rep(i, n, m) for (int (i) = (n); (i) < (m); ++(i))
#define debug(x) cerr << #x << ": " << x << endl;
#define debug2(x, y) cerr<<"("<<#x<<", "<<#y<<") = "<<"("<<x<<", "<<y<<")"<<endl;
#define debugB(x, y) cerr<<#x<<": "<<bitset<y>(x) << endl;
#define line() cerr << "---------------" << endl;

const ll INF = 1e9+7;

ll f(ll a, ll b) {
   ll ans = 1;
   while (b > 0) {
      if (b&1) {
         ans = ((ans%INF) * (a%INF))%INF;
      }
      a = ((a%INF) * (a%INF))%INF;
      b /= 2;
   }
   return ans;
}

int main() {
   ll n, m;
   cin >> n >> m;
   cout << f(n, m) << endl;

   return 0;
}
