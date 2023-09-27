#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <complex>
#include <cassert>
#include <vector>
#include <iomanip>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(int i=(a); i<(int)(b); i++)
#define rep(i,b) loop(i,0,b)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

typedef pair<int, int> P;

int main(){
    int n;
    while (cin >> n && n){
        vector<P> v(n * 2);
        rep(i, n){
            int a, b, c, d, e, f;
            scanf("%d:%d:%d %d:%d:%d", &a, &b, &c, &d, &e, &f);
            int arive = a * 3600 + b * 60 + c;
            int leave = d * 3600 + e * 60 + f;
            v[i] = P(arive, 1);
            v[i + n] = P(leave, -1);
        }
        sort(all(v));

        int ans = 0;
        int cur = 0;
        rep(i, v.size()){
            cur += v[i].second;
            ans = max(ans, cur);
        }
        cout << ans << endl;
    }
}