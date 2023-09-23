#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int x, y, s;
    while(cin >> x >> y >> s && x) {
        int ans = 0;
        for(int i=1; i<s; ++i) {
            for(int j=1; ; ++j) {
                int p = i*(100+x)/100 + j*(100+x)/100;
                if(p > s) break;
                if(p == s) {
                    ans = max(ans, i*(100+y)/100 + j*(100+y)/100);
                }
            }
        }
        cout << ans << endl;
    }
}