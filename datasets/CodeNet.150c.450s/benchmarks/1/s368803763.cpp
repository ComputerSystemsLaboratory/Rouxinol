// DPL_1_D
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

int n;
int inf=pow(10,9)+10;
vector<int> dp(100010,inf);
vector<int> a(100010);
bool bs(int mid,int now){
    if(mid<=0) return true;
    if(n+1<=mid) return false;
    return now<=dp[mid];
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);

    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int ng=0,ok=n+1;
        int mid=(ok+ng)/2;
        while(ok-ng>1){
            if(bs(mid,a[i])) ok=mid;
            else ng=mid;
            mid=(ok+ng)/2;
        }
        dp[ok]=a[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(dp[i]==inf) break;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
