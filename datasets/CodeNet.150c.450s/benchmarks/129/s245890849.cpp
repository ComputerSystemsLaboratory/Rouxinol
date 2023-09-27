#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define pi M_PI
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int a[101][101];

int main() {
    int n, m;
    cin >> n >> m;
    REP(i,n) REP(j,m) cin >> a[i][j];
    REP(i,n) REP(j,m) a[i][m] += a[i][j];
    REP(j,m+1) REP(i,n) a[n][j] += a[i][j];
    REP(i,n+1){
        REP(j,m+1){
            cout << a[i][j];
            if (j < m) cout << " ";
        }
        cout << endl;
    }
    return 0;
}