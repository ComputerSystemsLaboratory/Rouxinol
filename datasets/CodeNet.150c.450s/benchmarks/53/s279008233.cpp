#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rep2(i,n) for(ll i=1;i<=(n);i++)
#define rep3(i,i0,n) for(ll i=i0;i<(n);i++)
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

bool comparex(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b) {

    return get<1>(a) < get<1>(b);
        
}
bool comparey(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b) {

    return get<2>(a) < get<2>(b);
        
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

vector<Pi> pf(ll N){
    vector<Pi> res;
    for(ll a= 2; a*a <= N; ++a){
        if(N%a != 0) continue;
        ll ex= 0;

        while(N%a == 0){
            ++ex;
            N /= a;
        }

        res.pb(mp(a,ex));
    }
    if(N!=1) res.pb(mp(N,1));
    return res;
}

int main() {

    ll N;
    cin >> N;
    vector<Pi> ans;
    ans = pf(N);

    cout <<N<<":";

    rep(i,ans.size()){
        rep(j,ans[i].second){
            cout<<" "<<ans[i].first;
        }
    }

    cout<< endl;
  
    return 0;
    

}

