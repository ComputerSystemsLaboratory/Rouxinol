#include <iostream>
#include <cstdio>
using namespace std;
int a[100][100], n;
int d[200];
void duyet(int u)
{
    for(int v=0; v<n; v++)
    {
        if(a[u][v]>0 && d[v]>(d[u]+a[u][v]))
        {
            d[v]=d[u]+a[u][v];
            duyet(v);
        }
    }
}
int main()
{
    long long int s,t,u;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s>>t;
        for(int j=1; j<=t; j++)
        {
            cin>>s>>u; a[i][s]=u;
        }
        d[i]=1e6;
    }
    d[0]=0;
    duyet(0);
    for(int i=0; i<n; i++)
    {
        cout<<i<<" "<<d[i]<<endl;
    }
    return 0;
}

