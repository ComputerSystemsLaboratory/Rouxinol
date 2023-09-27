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

int n, y, d, m;

int main() {
   cin >> n;
   while (n--) {
      cin >> y >> m >> d;
      auto judge = [&]() -> int {
         if (y == 1000 && m == 1 && d == 1) return -1;
         int add = 20;
         if (y % 3 != 0 && m % 2 == 0) {
            add--;
         }
         return add;
      };
      if (judge() == -1) {
         cout << 0 << endl;
         continue;
      }

      auto go = [&]() {
         m++;
         if (m == 11) m = 1, d = 1 , y++;
      };

      int cnt = 0;
      cnt += judge() - d + 1;
      go();
      while (1) {
         if (y == 1000 && m == 1 && d == 1) break;
         cnt += judge();
         go();
      }
      cout << cnt << endl;
   }

   return 0;
}
