#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
#define MOD 1000000007
int m,n;
void solve(int  m,int n)
{
    long long res=1;
    long long x=m;
    while(n>0)
    {
        if(n&1)res=(res*x)%MOD;
        x=(x*x)%MOD;

        n>>=1;
    }
    cout<<res<<endl;

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&m,&n);
    solve(m,n);

    return 0;
}