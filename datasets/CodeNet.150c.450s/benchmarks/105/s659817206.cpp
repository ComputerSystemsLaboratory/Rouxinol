#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
using vi = vector<int>;
using vv = vector<vi>;
using P  = pair<ll,ll>;

int MSB64bit(ll a){
    bitset<64> v(a);
    v |= (v>>1);
    v |= (v>>2);
    v |= (v>>4);
    v |= (v>>8);
    v |= (v>>16);
    v |= (v>>32);
    return v.count()-1;
}

ll hakidasi(ll a, vector<ll> dp){
    
    int asize = MSB64bit(a);
    
    if(dp.size()==1){
        return a;
    }
    
    rep(i,dp.size()-1){
        int isize = MSB64bit(dp[i]);
        
        if(asize>isize)return a;
        if(asize<isize)continue;
        
        if(asize==isize){
            a ^= dp[i];
            if(a==0)return 0;
            asize = MSB64bit(a);
        }
    }
    return a;
}

int main(){
    int t; cin >> t;
    vi rtn(t);
    rep(tt,t){
        int n; cin >> n;
        vector<ll> a(n);
        rep(i,n)cin >> a[i];
        string s; cin >> s;
        
        vector<vector<ll>> dp(n+1);
        dp[n].push_back(0LL);
        
        for(int i=n-1; i>=0; i--){
            
            if(s[i]=='1'){
                if(hakidasi(a[i], dp[i+1])!=0){
                    
                    rtn[tt] = 1;
                    break;
                    
                }else{
                    
                    dp[i] = dp[i+1];
                    
                }
            }else{
                dp[i] = dp[i+1];
                
                ll next = hakidasi(a[i], dp[i+1]);
                
                if(next!=0){
                    dp[i].push_back(next);
                    sort(dp[i].rbegin(), dp[i].rend());
                }
            }
            
        }
        
        if(dp[0].size() && dp[0][0]==0){
            rtn[tt] = 0;
        }
        
    }
    rep(tt,t){
        cout << rtn[tt] << endl;
    }
    return 0;
}