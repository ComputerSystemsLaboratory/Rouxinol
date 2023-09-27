#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i, n) for(ll i = 0; i < (ll)n; i++)

ll MIN(ll a, ll b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int main() {
    ll T;
    cin>>T;
    vector <ll> ans(T,-1);
    
    rep(i,T){
        ll N;
        cin>>N;
        vector<ll> A(N,-1);
        rep(j,N){
            cin>>A[j];
        }
        string S;
        cin>>S;
        vector< vector<ll> > cand(N+1,vector<ll>());
        //cand[N].push_back(0);
        bool flag=false;
        for(ll j = N-1; j >= 0; j--){
            ll x=A[j];
            for(auto y: cand[j+1]){
                x=min(x,x^y);
            }
            cand[j]=cand[j+1];
            if (x!=0) {
                if( S[j] == '0'){
                    cand[j].push_back(x);
                }else{
                    flag=true;
                    break;
                }
            }
        }
        if (flag){
            ans[i]=1;
        }else{
            ans[i]=0;
        }
    }
    rep(i,T){
        cout<<ans[i]<<endl;
    }
    return 0;
}