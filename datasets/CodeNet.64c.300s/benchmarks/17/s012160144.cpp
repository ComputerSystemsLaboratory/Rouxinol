#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int x,y,s;
    while(cin >> x >> y >> s) {
        if(x == 0 && y == 0 && s == 0) break;

        int ans = 0;
        REP(i,1,s+1) {
            REP(j,1,s+1) {
                int a = i * (100 + x) / 100;
                int b = j * (100 + x) / 100;

                if(a + b == s) {
                    int c = i * (100 + y) / 100;
                    int d = j * (100 + y) / 100;

                    ans = max(ans,c + d);
                }
            }

        }

        cout << ans << endl;
    }
    
    return 0;
}