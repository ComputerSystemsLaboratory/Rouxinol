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
    int n, m;
    cin >> n;
    map<string, int> mp;
    while (n--){
        string u;
        cin >> u;
        mp[u] = 1;
    }
    cin >> m;
    int f = 1;
    while (m--){
        string t;
        cin >> t;
        if (mp[t]){
            if (f) cout << "Opened by " << t << endl;
            else cout << "Closed by " << t << endl;
            f ^= 1;
        }else{
            cout << "Unknown " << t << endl;
        }
    }
    return 0;
}