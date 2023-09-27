#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<(n);i++)
#define loop(i,a,n) for(i=a;i<(n);i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int main(void) {
    int i,j;
    int n, m;
    while(cin >> n >> m, n+m){
        vi h(n+1), w(m+1);
        h[0] = w[0] = 0;
        rep(i,n) cin >> h[i+1];
        rep(i,m) cin >> w[i+1];
        rep(i,n) h[i+1] += h[i];
        rep(i,m) w[i+1] += w[i];
        vi v1,v2;
        rep(i,n)loop(j,i+1,n+1)v1.push_back(h[j]-h[i]);
        rep(i,m)loop(j,i+1,m+1)v2.push_back(w[j]-w[i]);
/*
        rep(i,v1.size()) cout << v1[i] << endl;
        cout << endl;
        rep(i,v2.size()) cout << v2[i] << endl;
*/
        sort(all(v1));
        sort(all(v2));
        int ans = 0;
        rep(i,v1.size()){
            int t = v1[i];
            ans += upper_bound(all(v2), t) - lower_bound(all(v2), t);
        }
        cout << ans << endl;
    }
}

