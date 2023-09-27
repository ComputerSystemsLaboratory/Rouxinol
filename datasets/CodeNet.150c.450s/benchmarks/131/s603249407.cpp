#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,a) repi(i,0,a)
#define repd(i,a,b) for(int i=(a);i>=(b);i--)
#define repit(i,a) for(__typeof((a).begin()) i=(a).begin();i!=(a).end();i++)

#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())

#define pb push_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

void solve(int a, int l) {
    int cnt = 0;
    map<int, int> m;
    while(true) {
        if(m.find(a) != m.end()) {
            cout << m[a] << " " << a << " " << cnt-m[a] << endl;
            return;
        }
        m[a] = cnt++;
        vector<int> v;
        rep(i, l) {
            v.pb(a%10);
            a /= 10;
        }
        int b = 0, c = 0;
        sort(all(v));
        rep(i, l) {
            b *= 10;
            b += v[i];
        }
        
        sort(rall(v));
        rep(i, l) {
            c *= 10;
            c += v[i];
        }

        a = c - b;
    }
    
}

int main()
{
    int a, l;
    while(cin >> a >> l, a||l) {
        solve(a, l);
    }
    return 0;
}