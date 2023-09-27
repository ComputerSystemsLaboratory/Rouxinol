#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

typedef long long ll;
typedef vector<int> vi;

int N,M; Graph G;
void input()
{
    cin>>N>>M;
    G.resize(N+1);
    for(int i=0;i<M;++i){
        int a,b; cin>>a>>b;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
    }
}

void solve()
{
    vi nroom(N+1,-1);
    queue<int> que;

    nroom[1]=0; que.push(1);
    while(!que.empty()){
        int v=que.front(); que.pop();
        for(auto nv:G[v]){
            if(nroom[nv]>=0) continue;
            nroom[nv]=v;
            que.push(nv);
        }
    }

    bool flag=true;
    for(int i=1;i<=N;++i){
        if(nroom[i]<0){
            flag=false; break;
        }
    }
    if(flag){
        cout<<"Yes\n";
        for(int i=2;i<=N;++i){
            cout<<nroom[i]<<endl;
        }
    }
    else cout<<"No"<<endl;
}

int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
    input();
    solve();
    return 0;
}