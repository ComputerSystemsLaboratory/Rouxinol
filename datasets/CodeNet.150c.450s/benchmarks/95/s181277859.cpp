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
    int n;
    while (cin >> n && n){
        int ans = 0;
        bool l = 0, r = 0, f = 0;
        while (n--){
            string s;
            cin >> s;
            if (s[0] == 'l') l ^= 1;
            else r ^= 1;
            if (!f && l && r){
                ans++;
                f ^= 1;
            }else if (f && !l && !r){
                ans++;
                f ^= 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}