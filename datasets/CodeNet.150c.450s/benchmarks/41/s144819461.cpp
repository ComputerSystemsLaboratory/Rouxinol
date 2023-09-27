#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n;i++)
using pii = pair<int,int>;
using piii = pair<pii,int>;
using ll = long long;
#define int ll
signed main(){
    int v,e; cin>>v>>e;
    vector<piii>edge;
    rep(i,e){
        int a,b,c; cin>>a>>b>>c;
        edge.push_back(piii(pii(a,b),c));
    }
    vector<string>ans;
    rep(s,v){
        vector<int>d(v,LLONG_MAX/1000);
        d[s]=0;
        rep(i,v){
            bool update=false;
            rep(j,e){
                int to,from,cost;
                to=edge[j].first.second;
                from=edge[j].first.first;
                cost=edge[j].second;
                if(d[from]==LLONG_MAX/1000)continue;
                if(d[to]>d[from]+cost){
                    d[to]=d[from]+cost;
                    update=true;
                }
            }
            
            if(i==v-1&&update==true) return puts("NEGATIVE CYCLE")*0;
        }
        string temp;
        rep(i,v){
            if(i)temp+=" ";
            if(d[i]==LLONG_MAX/1000)temp+="INF";
            else temp+=(to_string(d[i]));
        }
        ans.push_back(temp);
    }
    rep(i,v)cout<<ans[i]<<endl;
}