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

int n;

map<char, vector<char>> mp = {
   {'1', {'.', ',', '!', '?', ' '}},
   {'2', {'a', 'b', 'c'}},
   {'3', {'d', 'e', 'f'}},
   {'4', {'g', 'h', 'i'}},
   {'5', {'j', 'k', 'l'}},
   {'6', {'m', 'n', 'o'}},
   {'7', {'p', 'q', 'r', 's'}},
   {'8', {'t', 'u', 'v'}},
   {'9', {'w', 'x', 'y', 'z'}},
};

void solve() {
   debug(mp['1'][0])
   debug(mp['1'][1])
   debug(mp['1'][2])

   exit(0);
}

int main() {
   // solve();
   cin >> n;
   while (n--) {
      string s;
      cin >> s;

      string ans = "";
      int size = s.size();
      for (int i = 0; i < size; i++) {
         if (s[i] == '0') continue;
         int cnt = 0;
         int idx = i;
         repp (j, i, size) {
            if (s[i] != s[j]) break;
            idx = j;
            cnt++;
         }
         int tSize = mp[s[i]].size();
         // printf("mp[%c][%d], %d\n", s[i], cnt%tSize, tSize);
         cnt--;
         if (cnt >= 0) {
            char c = mp[s[i]][cnt % tSize];
            ans += c;
         }
         i = idx;
      }

      cout << ans << endl;
   }

   return 0;
}
