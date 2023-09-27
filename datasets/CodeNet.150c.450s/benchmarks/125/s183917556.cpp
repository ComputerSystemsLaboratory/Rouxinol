#if 0
????????£?????????????´??????????
?????°?????¨??????dfs??????????????????????°??????§?????????
#endif

#include <iostream>
#include <vector>
using namespace std;
vector<int> E[101];
bool visited[101];
int in[101];
int out[101];
int count=0;
int nv(int n)
{
    int i=1;
    for(i=1;i<=n;i++)
    {
        if ( visited[i]==false )
            return i;
    }
    if (i>n) return 0;
}

void dfs(int n)
{
    visited[n]=true;
    in[n]=++count;
    for(vector<int>::iterator it=E[n].begin();it!=E[n].end();++it)
    {
        int now=*it;
        if(visited[now]==false)
            dfs(now);
    }
    out[n]=++count;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int e,n0;
        cin>>e>>n0;
        for(int j=0;j<n0;j++)
        {
            int t;
            cin>>t;
            E[e].push_back(t);
        }
        visited[i]=false;
        in[i]=out[i]=0;
    }

    int now=nv(n);
    while(now!=0)
    {
        dfs(now);
        now=nv(n);
    }


/*  for(int i=1;i<=n;i++)
    {
        for(vector<int>::iterator it=E[i].begin();it!=E[i].end();++it)
            cout<<*it<<" ";
        cout<<endl;
    }
*/
    for(int i=1;i<=n;i++)
        cout<<i<<" "<<in[i]<<" "<<out[i]<<endl;
    return 0;



}