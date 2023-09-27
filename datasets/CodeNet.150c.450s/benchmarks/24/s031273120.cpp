#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rep(i,n) for(int i=0;i<n;i++)
using vi=vector<int>;
using vvi=vector<vi>;
using pii=pair<int,int>;
int f(pii a){return (a.first*a.first + a.second*a.second)*200 + a.first;}

int main(void){
    int n,m;
    while(cin>>n>>m,n|m){
        map<int,int> mp;
        rep(i,n){
            int a,b;
            cin>>a>>b;
            if(mp.find(b)==mp.end()){
                mp[b]=0;
            }
            mp[b]+=a;
        }
        int ans=0;
        auto itr=mp.rbegin();
        for(;itr!=mp.rend();itr++){
            int cost=(*itr).first;
            int count=(*itr).second;
            if(m>=count){
                m-=count;
            }else{
                ans+=(count-m)*cost;
                m=0;
            }
        }
        cout<<ans<<endl;
    }
}