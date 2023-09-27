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

int conv(int a, int l){
    VI p;
    REP(i,l){
        p.push_back(a % 10);
        a /= 10;
    }
    sort(p.begin(),p.end());
    int mi = 0, ma = 0;
    REP(i,l){
        mi *= 10;
        ma *= 10;
        mi += p[i];
        ma += p[l-1-i];
    }
    return ma - mi;
}

int main() {
    int a, l;
    while (cin >> a >> l && l){
        map<int, int> mp;
        mp[a] = 1;
        REP(i,20){
            a = conv(a, l);
            if (mp[a] > 0){
                printf("%d %d %d\n", mp[a]-1, a, i+2-mp[a]);
                break;
            }
            mp[a] = i+2;
        }
    }
    return 0;
}