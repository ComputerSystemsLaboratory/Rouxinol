#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int g[101][101], d[101];
deque<pair<int,int> > q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int id, k;
        cin>>id>>k;
        g[id][0]=k;
        for(int j=1; j<=k; j++) {
            cin>>g[id][j];
        }
    }
    for(int i=0; i<=100; i++) d[i]=-1;
    q.push_back(make_pair(1,0));
    
    while(!q.empty()){
        pair<int, int> now = q.front();
        q.pop_front();
        int id=now.first, cost=now.second;
        if(d[id]!=-1) continue;
        d[id]=cost++;
        int vn=g[id][0];
        for(int i=1; i<=vn; i++) q.push_back(make_pair(g[id][i],cost));
    }
    for(int i=1; i<=n; i++) cout<<i<<' '<<d[i]<<'\n';
    return 0;
}