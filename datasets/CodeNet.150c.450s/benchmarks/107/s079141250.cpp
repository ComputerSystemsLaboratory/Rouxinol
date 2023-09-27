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

bool compareg(Pi a, Pi b) {
    if(a.second != b.second){
        return a.second > b.second;
        
    }else{
        return a.first > b.first;
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

const vector<ll> d2{0, 1, 0, 2, 0, 1};
const vector<ll> d3{0, 0, 1, 0, 0, 1};
const vector<ll> d5{0, 0, 0, 0, 1, 0};



int main() {
    string s1,s2;
    cin>>s1>>s2;

    ll N = s1.size();
    ll M = s2.size();
    vector<vector<ll>>dp(N+1,vector<ll> (M+1));
  
    rep(i,N){
        dp[i+1][0] = i+1;
    }

    rep(i,M){
        dp[0][i+1] = i+1;
    }

    rep(i,N){
        rep(j,M){
            if(s1[i] == s2[j]){
                dp[i+1][j+1] = min({dp[i][j],dp[i+1][j]+1,dp[i][j+1]+1});
            }else{
                dp[i+1][j+1] = min({dp[i][j]+1 ,dp[i+1][j]+1,dp[i][j+1]+1});
            }
        }
    }

    cout<<dp[N][M]<<endl;
    return 0;
    

}

