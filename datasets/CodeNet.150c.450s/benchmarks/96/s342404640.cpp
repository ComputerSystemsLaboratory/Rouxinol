#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
typedef  unsigned long long int ull;
typedef pair<ll,ll> P;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
//const ll mod=998244353;
const ll mod=1000000007;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int main(){
   int q;
   cin>>q;
   V<string> d(10);
   d[1]=".,!? ";
   d[2]="abc";
   d[3]="def";
   d[4]="ghi";
   d[5]="jkl";
   d[6]="mno";
   d[7]="pqrs";
   d[8]="tuv";
   d[9]="wxyz";
  while(q--){
    string s={};
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            int now=s[i]-'0';
            int cnt=0;
            while(s[i+cnt]!='0')cnt++;
            cnt--;
            cout<<d[now][cnt%d[now].size()];
            i+=cnt;
        }
    }
    cout<<endl;
  }
 
}
