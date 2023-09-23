#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

int main(){
    int x, y, s;
    while(cin >> x >> y >> s && !(x == 0 && y == 0 && s == 0) ) {
        int ans = INT_MIN;
        for(int i = 1; i <= s; i++) {
            for(int j = i; j <= s; j++) {
                int a = i * (100+x) / 100 ;
                int b = j * (100+x) / 100 ;
                if(a + b != s) continue;
                int c = i * (100+y) / 100 ;
                int d = j * (100+y) / 100 ;
                ans = max(ans, c + d);
            }
        }
        cout << ans << endl;
    }
    return 0;
}