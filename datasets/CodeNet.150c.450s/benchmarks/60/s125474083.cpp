#include<iostream>
using namespace std;
bool m[110][110];
int main()
{
    int n,u,k,v;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        cin>>u>>k;
        for(int i=1;i<=k;i++)
        {
            cin>>v;
            m[u][v]=1; //连边
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j!=1) cout<<" ";
            cout<<m[i][j];
        }
        cout<<endl;
    }
    return 0;
}
