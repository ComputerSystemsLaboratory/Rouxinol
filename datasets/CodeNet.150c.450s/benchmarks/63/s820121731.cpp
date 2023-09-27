#include <utility>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <queue>
#include <climits>
using namespace std;
typedef pair<int,int> p;
int d[100003];
vector<p>edge[100002];
int main()
{
    priority_queue<p,vector<p>,greater<p> > que;
    int v,e,r;
    int s,t,d0;
    cin>>v>>e>>r;
    for(int i=0;i<100002;i++){d[i]=INT_MAX;}
    for(int i=0;i<e;i++){
        scanf("%d%d%d",&s,&t,&d0);
        edge[s].push_back(p(t,d0));}
    que.push(p(0,r));
    d[r]=0;
    while(!que.empty()){
        p cur=que.top();
        que.pop();
        if(d[cur.second]<cur.first)continue;
        for(int i=0;i<edge[cur.second].size();i++){
            p to=edge[cur.second][i];
            if(d[to.first]>=d[cur.second]+to.second){
                d[to.first]=d[cur.second]+to.second;
                que.push(p(d[to.first],to.first));}
        }
    }
    for(int i=0;i<v;i++){
        if(d[i]==INT_MAX)cout<<"INF"<<endl;
        else
            cout<<d[i]<<endl; }
    return 0;
}