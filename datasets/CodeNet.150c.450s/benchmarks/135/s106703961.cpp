#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi=vector<vi>;
using vs=vector<string>;
using msi=map<string,int>;
using pii=pair<int,int>;
using vlai=valarray<int>;
using ll=long long;
#define rep(i,n) for(int i=0;i<n;i++)
#define range(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

int main(void){
    int n,m;
    while(cin>>n>>m,n){
        vi v(n+1,0),h(m+1,0);
        rep(i,n)cin>>v[i+1];
        rep(i,m)cin>>h[i+1];
        partial_sum(all(v),v.begin());
        partial_sum(all(h),h.begin());
        map<int,int> v2,h2;
        rep(i,n+1)range(j,i+1,n+1) {
            if(v2.find(v[j]-v[i])==v2.end()) v2[v[j]-v[i]]=0;
            v2[v[j]-v[i]]++;
        }
        rep(i,m+1)range(j,i+1,m+1) {
            if(h2.find(h[j]-h[i])==h2.end()) h2[h[j]-h[i]]=0;
            h2[h[j]-h[i]]++;
        }
        ll ans=0;
        for(auto i:v2){
            if(h2.find(i.first)!=h2.end()){
                ans+=i.second*h2[i.first];
            }
        }
        cout<<ans<<endl;
    }
}