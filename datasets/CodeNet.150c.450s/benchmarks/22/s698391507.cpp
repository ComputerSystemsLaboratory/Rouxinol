#include <bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define INF 1000000007
// cin.eof() 入力個数の問題
int main(){
int v, e, r;
    cin >> v >> e >> r;
    vector<pair<pair<int,int>,int>> G;
    rep(i, e) {
        int a, b, c;
        cin >> a >> b >> c;
        G.push_back(make_pair(make_pair(a,b),c));
    }
    vector<int> ans;
    rep(i, v) {
        ans.push_back(INF);
    }
    ans[r]=0;

    int count=0;
    rep(i,v){
      rep(k,e){
        int u=G[k].first.first,V=G[k].first.second,cost=G[k].second;
        //cout<<"u=="<<u<<" v=="<<V<<" cost=="<<cost<<" i=="<<i<<endl;
        //cout<<"ans[u]+cost=="<<ans[u]+cost<<" ans[V]=="<<ans[V]<<endl;
        if(ans[u]+cost<ans[V]&&ans[u]!=INF){
          //cout<<"change"<<endl;
          ans[V]=ans[u]+cost;
          if(i==v-1){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
          }
        }
      }
    }
    
rep(i,v){
  if(ans[i]==INF){
    cout<<"INF"<<endl;
  }else
  {
    cout<<ans[i]<<endl;
  }
  
}

  return 0;
}

