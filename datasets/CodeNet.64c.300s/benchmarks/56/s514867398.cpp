#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    rep(i,n) {
        int ans = 1;
        int y,m,d;
        cin >> y >> m >> d;

        if(y%3 == 0) {
            ans += 20 - d;
            REP(j,m+1,11) {
                ans += 20;
            }
        }
        else {
            if(m%2 == 0) ans += 19 - d;
            else ans += 20 - d;

            REP(j,m+1,11) {
                if(j%2 == 0) ans += 19;
                else ans += 20;
            }
        }

        REP(j,y+1,1000) {
            if(j%3 == 0) ans += 10*20;
            else ans += 5*19 + 5*20;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}