#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;
using namespace std;

int main(){
    int n,m;
    int a,b;
    cin>>n>>m;
    vector<vector<int>> v(n);
    rep(i,m){
        cin>>a>>b;
        a--;b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    queue<int> Q;
    vector<int> tt(n,-1),dist(n,-1);
    Q.push(0);
    dist[0]=0;
    while (!Q.empty()){
        int fron=Q.front();
        Q.pop();
        for(auto x:v[fron]){
            if(dist[x]==-1){
                Q.push(x);
                dist[x]=fron;
            }
        }
    }
    cout<<"Yes"<<endl;
    for(auto i=dist.begin()+1;i!=dist.end();i++)
    cout<<*i+1<<endl;
    
}

