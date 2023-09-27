#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int MAXY = 1001, MAXM = 21;

int sumy[MAXY];

int main()
{
    REP(MAXY)
    {
        if(i % 3 == 0) sumy[i] = 20  * 10;
        else sumy[i] = 20 * 5 + 19 * 5;
    }

    int n, y, m, d;
    while(cin >> n && n)
    {
        REP(n)
        {
            cin >> y >> m >> d;
            int ans = 0;
            for(int j = y+1;j<1000;j++)ans += sumy[j];

            if(y % 3 == 0) ans += (10 - m)  * 20;
            else ans += ( (10 - m)/2 )* 20 + ( (10-m) /2 + (10 - m)%2) * 19;

            if(y % 3 == 0 || m % 2 == 1) ans += 20 - d + 1;
            else ans += 19 - d + 1;

            cout << ans << endl;
        }

    }

    return 0;
}