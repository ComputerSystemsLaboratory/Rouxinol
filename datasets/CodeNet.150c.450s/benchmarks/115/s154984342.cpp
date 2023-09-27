#include<iomanip>
#include<limits>
#include<thread>
#include<utility>
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<cassert>
#include<random>
#include<chrono>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
#define F first
#define S second
#define MK make_pair
const ll E=1e17+7;
const ll MOD=1000000007;






int main(){
    ll q;
    cin>>q;
    while(q--){
        
        
    string a,b;
    cin>>a>>b;
    
    vector<set<ll>> w(300);
    vector<vector<ll>> dp(2000);
    for(int i=0;i<dp.size();i++){dp[i].resize(2000,E);}
    
    for(int i=0;i<b.size();i++){
        w[b[i]].insert(i);
    }
    
    ll mx=0;
    
    for(int i=0;i<a.size();i++){
        for(int t=0;t<b.size()+100;t++){
            if(t==0 && !w[a[i]].empty() && *w[a[i]].begin()<dp[i][t]){
                dp[i+1][t]=*w[a[i]].begin();
                mx=max(mx,(ll)t+1);
            }
            else if(w[a[i]].upper_bound(dp[i][t-1])!=w[a[i]].end() && *w[a[i]].upper_bound(dp[i][t-1])<dp[i][t]){
                dp[i+1][t]=*w[a[i]].upper_bound(dp[i][t-1]);
                mx=max(mx,(ll)t+1);
            }
            else{dp[i+1][t]=dp[i][t];}
        }
    }
    cout<<mx<<endl;
        
        
    }
    
    return 0;
}



