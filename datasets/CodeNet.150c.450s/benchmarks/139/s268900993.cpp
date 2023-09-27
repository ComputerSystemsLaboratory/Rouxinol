#include <vector>
#include <queue>
#include <iostream>
#define endl '\n'
using namespace std;
int n, m, a, b;
const int sz=1e5+1;
const int big=1*(1e5);
vector<int> g[sz];
int prv[sz],costs[sz];
bool visited[sz];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
queue<int> ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    fill(costs,costs+sz,big);
    while (m--)
    {
        cin >> a >> b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    pq.push(make_pair(0,1));
    while(!pq.empty()){
        auto currP=pq.top();
        pq.pop();
        int curr=currP.second;
        int cost=currP.first;
        if(visited[curr]) continue;
        visited[curr]=1;

        for(int c:g[curr]){
            if(!visited[c] && costs[c]>cost+1){
                costs[c]=cost+1;
                pq.push(make_pair(costs[c],c));
                prv[c]=curr;
            }
        }
    }
    for(int i=2;i<n+1;++i){
        if(costs[i]==big){
            cout<<"No"<<endl;
            return 0;
        }
        ans.push(prv[i]);
    }
    cout<<"Yes"<<endl;
    while(!ans.empty()){
        cout<<ans.front()<<endl;
        ans.pop();
    }
    return 0;
}
