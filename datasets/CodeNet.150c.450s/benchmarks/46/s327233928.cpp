#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        
        if(n==0)break;
        int sum=0;
        rep(i,1,n+1)
        {
            rep(j,i+1,n+1)
            {
                rep(k,j+1,n+1)
                {
                    if(i+j+k==x)sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}

