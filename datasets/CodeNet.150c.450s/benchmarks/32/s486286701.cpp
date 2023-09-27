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
    int n, mi, ma;
    while (cin >> n >> mi >> ma && n){
        int ans = 0, x = 0;
        VI p(n);
        REP(i,n) cin >> p[i];
        FOR(i,mi-1,ma-1){
            int y = p[i] - p[i+1];
            if (y >= x){
                ans = i+1;
                x = y;
            }
        }
        cout << ans << endl;
    }

    return 0;
}