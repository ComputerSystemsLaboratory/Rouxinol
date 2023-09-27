#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=(n);i++)
using ll=long long;

int n,m;
vector<vector<int>> dat(1000000);
vector<int> ans(1000000);

int main(){
    cin>>n>>m;
    rep(i,m){
        int a,b;
        cin>>a>>b;
        dat[a].push_back(b);
        dat[b].push_back(a);
    }
    cout<<"Yes"<<endl;
    queue<int> que;
    que.push(1);
    while(que.size()){
        int q=que.front();que.pop();
        for(int p:dat[q]){
            if(ans[p]!=0) continue;
            ans[p]=q;
            que.push(p);
        }
    }
    for(int i=2;i<=n;i++){
        cout<<ans[i]<<endl;
    }
}