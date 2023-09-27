#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

int r,l;
int n;

void solve() {
    int ans = 0;
    string s;
    r = 0;
    l = 0;
    int a = 1;
    rep(i,n) {
        cin>>s;
        if(l==0 && s == "lu") {
            l^=1;
        }
        if(l==1 && s == "ld") {
            l^=1;
        }
        if(r==0 && s == "ru") {
            r^=1;
        }
        if(r==1 && s == "rd") {
            r^=1;
        }
        if(r==l && a == r) {
            ans++;
            a^=1;

        }
        // cout<<r<<","<<l<<endl;
    }
    cout<<ans<<endl;

}

int main() {
    while(cin>>n) {
        if(n==0) break;
        solve();
    }
    return 0;
}