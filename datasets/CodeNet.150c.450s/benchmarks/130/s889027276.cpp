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

int a[100][100], b[100], c[100];

int main() {
    int n, m;
    cin >> n >> m;
    REP(i,n) REP(j,m) cin >> a[i][j];
    REP(i,m) cin >> b[i];
    REP(i,n) REP(j,m) c[i] += a[i][j] * b[j];
    REP(i,n) cout << c[i] << endl;
    return 0;
}