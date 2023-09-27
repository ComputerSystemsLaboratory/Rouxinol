#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<bitset>
#include<cstdlib>
#include<cmath>
#include<set>
#include<list>
#include<deque>
#include<map>
#include<queue>
#define LL long long
using namespace std;
int main()
{
    int a[200],n,m[200][200],i;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        cin>>a[i-1]>>a[i];
        m[i][i]=0;
    }
    for (int l=2; l<=n; l++)
    {
        for (int i=1; i<=n-l+1; i++)
        {
            int j=i+l-1;
            m[i][j]=(1<<21);
            for (int k=i; k<=j-1; k++)
            {
                m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+a[i-1]*a[k]*a[j]);
            }
        }
    }
    cout<<m[1][n]<<endl;
    return 0;
}

