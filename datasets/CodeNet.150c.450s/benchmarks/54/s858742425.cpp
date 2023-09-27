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
    string s, t;
    cin >> s;
    int ans = 0;
    while (cin >> t && t != "END_OF_TEXT"){
        if (s.length() != t.length()) continue;
        int f = 1;
        REP(i,s.length()){
            if ((s[i]-t[i])%('a'-'A') != 0) f = 0;
        }
        ans += f;
    }
    cout << ans << endl;
    return 0;
}