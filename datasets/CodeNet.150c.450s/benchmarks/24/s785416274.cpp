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
    while (cin >> n >> m && n){
        vector<P> a(n);
        REP(i,n){
            int d, p;
            scanf("%d %d", &d, &p);
            a[i] = make_pair(-p, d);
        }
        sort(a.begin(),a.end());
        int ans = 0;
        REP(i,n){
            if (m > a[i].second){
                m -= a[i].second;
            }else{
                a[i].second -= m;
                m = 0;
                ans -= a[i].second*a[i].first;
            }
        }
        cout << ans << endl;
    }
    return 0;
}