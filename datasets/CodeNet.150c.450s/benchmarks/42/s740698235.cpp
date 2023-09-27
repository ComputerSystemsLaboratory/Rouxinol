#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<utility>
using namespace std;
#define maxn 100005
typedef pair<string,int> P;
int n,t;
string name;
int cost;
queue<P> q;
queue<P> ans;
int Time;
void Solve()
{
    while(!q.empty())
    {
        P p=q.front();
        P pp;
        if(p.second>t)
        {
            pp.first=p.first;
            pp.second=p.second-t;
            q.push(pp);
            q.pop();
            Time+=t;
        }
        else
        {
            Time+=p.second;
            ans.push(make_pair(p.first,Time));
            q.pop();
        }

    }
}
int main()
{
    P sp;
    while(cin>>n>>t)
    {
        Time=0;
        for(int i=0;i<n;i++)
        {
            cin>>name>>cost;
            q.push(make_pair(name,cost));
        }

        Solve();

        while(!ans.empty())
        {
            cout<<ans.front().first<<" "<<ans.front().second<<endl;
            ans.pop();
        }

    }
    return 0;
}