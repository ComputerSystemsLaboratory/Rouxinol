#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()
#define mp make_pair
bool compare(Pi a, Pi b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}


bool In_map(ll y,ll x,ll h,ll w){
    if(y<0 || x<0 || y>=h || x>=w){
        return 0;
    }else{
        return 1;
    }
}
const vector<ll> dx{1,0,-1,0};
const vector<ll> dy{0,1,0,-1};

int main() {
    ll V,E;
    cin >> V>>E;
    vector<vector<ll>> dp(V,vector<ll>(V,INF));
    rep(i,E){
        ll s,t,d;
        cin >> s>> t>>d;
        //s--;
        //t--;
        dp[s][t] = d;

    }
    rep(i,V){
        dp[i][i] = 0;
    }
    rep(k,V){
        rep(i,V){
            rep(j,V){
                chmin(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    
    rep(i,V){
        if(dp[i][i] <0){
            cout << "NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    rep(i,V){
        rep(j,V){
            if(dp[i][j] > INF/2){
                cout << "INF";
            }else{
                cout << dp[i][j];
            }
            if(j!=V-1){
                cout <<" ";
            }
        }
        cout <<endl;
    }
    
    
    return 0;
    

}

