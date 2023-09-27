#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
typedef struct pp{
    char name[100];
    int t;
} P;
queue<P> m;
int main()
{
    int i,n,q,ans=0;
    P u;
    cin>>n>>q;
    for(i=0;i<n;i++)
    {
        cin>>u.name>>u.t;
        m.push(u);
    }
    while(!m.empty())
    {
        u=m.front();
        if(q>=u.t)
        {
            ans+=u.t;
            m.pop();
            cout<<u.name<<" "<<ans<<endl;
        }
        else
        {
            ans+=q;
            u.t-=q;
            m.push(u);
            m.pop();
        }
    }
    return 0;
}