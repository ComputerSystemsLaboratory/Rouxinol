#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int ans = 0;

        REP(i,1,1001) {
            if(i > n) break;
            int res = i;
            
            REP(j,i+1,1001) {
                res += j;

                if(res > n) break;
                if(res == n) {
                    ans++;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}