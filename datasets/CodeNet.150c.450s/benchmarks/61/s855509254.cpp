#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<vector>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int maxn = 101,maxa = 10001,maxb = 10001,maxc = 10001;

unsigned int n,a,b,c,x;
int y[maxn];

int main()
{
    while(cin >>n>>a>>b>>c>>x &&(n&&c))
    {
        REP(n) cin>>y[i];

        int now = 0;
        int ans = -1;
    
        REP(10001)
        {
            //cout << x <<endl;
            if(y[now] == x) now++;
                
            if(now == n)
            {
                ans = i;
                break;
            }
            x = ((a * x) + b) % c;
        }


        cout << ans << endl;
    }
    return 0;
}