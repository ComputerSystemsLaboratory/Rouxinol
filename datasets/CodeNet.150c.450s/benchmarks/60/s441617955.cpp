#include<iostream>
using namespace std;
int main()
{
    int hh[108][108];
    int n,m,u,v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            hh[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cin>>u>>m;
        for(int j=1;j<=m;j++)
        {
            cin>>v; hh[u][v]=1;
        }


    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<hh[i][j];if(j!=n)cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}