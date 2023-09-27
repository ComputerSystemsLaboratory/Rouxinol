#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
#define reps(i,s,n) for(int i=s; i<n; i++)
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

int cnt[86400];

int main() {
    int n;
    while( scanf("%d", &n), n ) {
        memset( cnt, 0, sizeof(cnt) );
        rep(i,n) {
            int sh, sm, ss, eh, em, es;
            scanf("%d:%d:%d %d:%d:%d", &sh, &sm, &ss, &eh, &em, &es);
            int st = sh*3600+sm*60+ss;
            int et = eh*3600+em*60+es;
            for(int t=st; t<et; t++) {
                cnt[t]++;
            }
        }
        int maxi = 0;
        rep(i, 86400) {
            if( maxi < cnt[i] )
                maxi = cnt[i];
        }
        cout << maxi << endl;
    }
    return 0;
}