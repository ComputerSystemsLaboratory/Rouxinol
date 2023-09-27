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

int main() {
    int a[4][14] = {};
    int n;
    cin >> n;
    REP(i,n){
        char c;
        int x;
        cin >> c >> x;
        if (c == 'S') a[0][x] = 1;
        else if (c == 'H') a[1][x] = 1;
        else if (c == 'C') a[2][x] = 1;
        else a[3][x] = 1;
    }
    string s = "SHCD";
    REP(i,4) FOR(j,1,13) if (!a[i][j]) cout << s[i] << " " << j << endl;
    return 0;
}