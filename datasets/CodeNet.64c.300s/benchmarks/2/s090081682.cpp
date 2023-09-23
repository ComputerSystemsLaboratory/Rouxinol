#include <bits/stdc++.h>

using namespace std;

#define REP(i,m) for(long long i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
#define INF 1000000000
#define INFL 10000000000000000LL
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define ll long long int
#define P pair<ll, ll>

int main() {
  while(true){
    int x, y, z;
    cin >> x >> y >> z;
    if(x == -1 && y == -1 && z == -1) break;
    if(x == -1 || y == -1) cout << "F" << endl;
    else if(x+y >= 80) cout << "A" << endl;
    else if(x+y >= 65) cout << "B" << endl;
    else if(x+y >= 50 || (x+y >= 30 && z >= 50)) cout << "C" << endl;
    else if(x+y >= 30) cout << "D" << endl;
    else cout << "F" << endl;
  }
  return 0;
}

