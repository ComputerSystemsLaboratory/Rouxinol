#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int graph[110][110]={0};
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        int v,k,tm;
        cin>>v>>k;
        while(k--)
        {
            cin>>tm;
            graph[v][tm]=1;
        }
    }
    for(int i=1;i<=n;++i)
    {
    for(int j=1;j<=n;++j)
    {
        if(j>1){cout<<" ";}
        cout<<graph[i][j];
    }
    cout<<endl;
    }
    return 0;
}

