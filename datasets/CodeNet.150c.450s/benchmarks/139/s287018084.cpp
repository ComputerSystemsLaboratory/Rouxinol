#include <iostream>
#include <queue>
#include <vector>
#define rep(i, n)	for(int i=0;i<(int)(n);i++)
using namespace std;
using ll=long long;
using p=pair<int,int>;

int main(){
    int n,m;
    cin>>n>>m;
    int a,b;
    vector<vector<int>> to(n, vector<int>());
    rep(i,m){
        cin>>a>>b;
        a--;b--;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    //rep(i, n) cout<<to[i][0]<<endl;
    bool flg[200010]={false};
    flg[0]=true;
    queue<int> root;
    root.push(0);
    int ans[200010];
    
    while(!root.empty()){
        int v=root.front();
        //cout<<v<<endl;
        root.pop();
        for(int x:to[v]){
            //cout<<x<<endl;
            if(flg[x]) continue;
            root.push(x);
            ans[x]=v;
            flg[x]=true;
        }
    }
    cout<<"Yes"<<endl;
    for(int i=1;i<n;i++){
        cout<<ans[i]+1<<endl;
    }
}