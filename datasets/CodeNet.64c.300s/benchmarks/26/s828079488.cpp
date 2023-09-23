// NTL_1_B
#include <bits/stdc++.h>
#define endl "\n"
#define rep(i,n) for(int i=0;i<int(n);i++)
#define e_b emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> ipair;
typedef pair<ll,ll> lpair;
template <class T>ostream &operator<<(ostream &o,const vector<T>&v) //vectorの中身を見る
{o<<"{";for(int i=0;i<(int)v.size();i++)o<<(i>0?", ":"")<<v[i];o<<"}";return o;}
void map_p(map<int,int>& d){cout<<"map: ";for(auto a : d){cout<<"{"<<a.first<<":"<<a.second<<"}";}cout<<endl;} //mapの中身を見る
void set_p(set<int>& d){cout<<"set: ";for(int a : d){cout<<a<<" ";}cout<<endl;} //setの中身を見る

ll mod=pow(10,9)+7;
ll modpow(ll m,ll n){ //m^n(mod)
    if(n==0) return 1;
    if(n==1) return m%mod;
    if(n%2==1){
        ll kari=modpow(m,n-1);
        kari*=m;
        kari%=mod;
        return kari;
    }
    ll kari=modpow(m,n/2);
    kari*=kari;
    kari%=mod;
    return kari;
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    ll m,n;
    cin>>m>>n;
    cout<<modpow(m,n)<<endl;
    return 0;
}
