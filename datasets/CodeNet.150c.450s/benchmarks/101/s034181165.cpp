#include <iostream>
#include <list>
#include <algorithm>
#include <queue>
using namespace::std;


int main()
{
        int n,m,n1,n2,i,j,k,v,a,b,c,s,compindx,f;
        compindx=0;
        cin>>n>>m;
        list<int> adj[100001];
        queue<int>q;
        for(i=0;i<m;i++)
        {
                cin>>n1>>n2;
                adj[n1].push_back(n2);
                adj[n2].push_back(n1);
        }
        int visited[n];
        int id[n];
        for(j=0;j<n;j++)
        {
                visited[j]=0;
        }
        for(j=0;j<n;j++)
        {
               if(visited[j]==0)
                {
                        s=j;
                        q.push(s);
                        while(q.empty()==false)
                        {
                                 v=q.front();
                                 visited[v]=1;
                                 id[v]=compindx;
                                 q.pop();
                                for(list<int>::iterator it = adj[v].begin(); it != adj[v].end(); it ++)
                                {
                                        if(visited[*it]==0)
                                        {
                                                f=*it;
                                                q.push(f);
                                                visited[*it]=1;
                                        }

                                }
                        }
                        compindx++;
                }
           }
        cin>>c;
        for(k=0;k<c;k++)
        {
                cin>>a>>b;
                if(id[a]==id[b])
                {
                        cout<<"yes"<<endl;
                }
                else
                {
                        cout<<"no"<<endl;
                }
        }

}


