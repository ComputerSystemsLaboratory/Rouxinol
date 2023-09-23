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
#define debugB(value, size) cerr<<#value<<": "<<bitset<size>(value) << endl;
#define line() cerr << "---------------" << endl;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
const double PI = 3.14159265358979323846;

template<typename T>
void printA(vector<T> &printArray, char between = ' ') {
   int paSize = printArray.size();
   for (int i = 0; i < paSize; i++) { cerr << printArray[i] << between;}
   if (between != '\n') {cerr << endl;}
}

// ------------------------------------------------------------------------------------------

using pii = pair<int, int>;

int N;
pii p[555];
int M;

int main() {
   while (1) {
      cin >> N;
      if (N == 0) return 0;

      rep (i, N) {
         cin >> p[i].first >> p[i].second;
      }

      cin >> M;
      int x = 10, y = 10;
      rep (i, M) {
         char c; int d;
         cin >> c >> d;
         int dx = 0, dy = 0;
         if (c == 'N') dy = 1;
         if (c == 'S') dy = -1;
         if (c == 'W') dx = -1;
         if (c == 'E') dx = 1;
         while (d--) {
            x += dx, y += dy;
            rep (j, N) {
               if (p[j].first == x && p[j].second == y) p[j].first = -1, p[j].second = -1;
            }
         }
      }

      bool ok = true;
      rep (i, N) {
         if (p[i].first != -1 || p[i].second != -1) {
            ok = false;
         }
      }
      puts(ok ? "Yes" : "No");
   }

   return 0;
}
