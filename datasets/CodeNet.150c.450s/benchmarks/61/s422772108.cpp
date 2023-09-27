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
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x && n){
        VI y(n);
        REP(i,n) cin >> y[i];
        int j = 0, f = 1;
        REP(i,10001){
            if (x == y[j]) j++;
            if (j == n){
                cout << i << endl;
                f = 0;
                break;
            }
            x = (a * x + b) % c;
        }
        if (f) cout << -1 << endl;
    }
    return 0;
}