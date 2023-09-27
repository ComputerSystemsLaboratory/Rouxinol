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
    while(1){
    ll H;
    cin >>H;
    if(H==0) break;
    vector<vector<ll>> R(H,vector<ll>(5));

    rep(i,H) rep(j,5) cin>>R[i][j];
    ll ans = 0;
    rep(m,H){
        rep(i,H){
            ll cnt=0;
            ll p=-1;
            rep(j,5){
                if(R[i][j] == p && R[i][j] != -1){
                    cnt++;
                    if(j==4){
                        if(cnt>=3){
                            ans += R[i][j-1]*cnt;
                            rep(k,cnt){
                                R[i][j-k] = -1;
                            }
                        }
                    }
                }else{
                    if(cnt>=3){
                        ans += R[i][j-1]*cnt;
                        rep(k,cnt){
                            R[i][j-k-1] = -1;
                        }
                    }
                    cnt = 1;
                }
                

                p = R[i][j];
            }
        }
        rep(j,5){
            vector<ll> tmp;
            rep(i,H){
                if(R[H-1-i][j] != -1){
                    tmp.pb(R[H-1-i][j]);
                }
            }
            rep(i,H){
                if(i<tmp.size()){
                    R[H-1-i][j] = tmp[i];
                }else{
                    R[H-1-i][j] = -1;
                }
            }
        }

        /*rep(i,H){
            rep(j,5){
                cout << R[i][j]<<" ";
            }
            cout <<endl;
        }*/

    }

    cout << ans<<endl;
    }
    return 0;
    

}

