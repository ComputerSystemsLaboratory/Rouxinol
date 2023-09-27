#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
#define NMAX 5100

//int dp[NMAX][NMAX];
int a[NMAX];

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        memset(a,0,sizeof(int)*NMAX);

        for(int i =1;i<=n;++i)
        {
            cin >> a[i];
        }
        int sum = 0,ans = a[1];
        for(int first = 1;first<=n; ++first)
        {
            sum = a[first];
            if(ans<sum) ans = sum;
            for(int last = first+1;last<=n;++last)
            {
                sum += a[last];
                if(ans<sum) ans = sum;
            }
            sum = 0;
        }
        cout << ans << endl;
    }
    return 0;
}