#include<iostream>
#define REP(i,n) for(int i=1;i<=n;i++)
using namespace std;

#define N 10

int main()
{
    int t;
    while(cin >> t)
    {
        int ans = 0;
        for(int i=0;i<=9;i++)for(int j=0;j<=9;j++)for(int k=0;k<=9;k++)for(int l=0;l<=9;l++)if((i+j+k+l)==t)ans++;

        cout << ans << endl;
    }

    return 0;
}