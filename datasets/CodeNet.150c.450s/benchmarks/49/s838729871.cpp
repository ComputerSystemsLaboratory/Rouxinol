#include <bits/stdc++.h>

#define REP(i ,n) for(int i=0 ;i < n; i++)
#define REPB(i ,n) for(int i=n; i >= 0; i--)
#define FOR(i ,m ,n) for(int i=m; i < n; i++)
#define FORB(i, m, n) for(int i=m; i>= n; i--)
#define ll long long
#define pb push_back
#define popb pop_back
#define debug(i) cout << i << endl
using namespace std;
int main(){
int n, sum = 0;
vector<int> point;

cin >> n;

while(n != 0){
    REP(i, n){
        int tmp;
        cin >> tmp;
        point.pb(tmp);
      }
      sort(point.begin(), point.end());

      FOR(i,1, (n-1)) sum += point[i];
      cout << (sum / (n - 2)) << endl;
      point.clear();
      sum = 0;
      cin >> n;
  }
  return 0;
}
