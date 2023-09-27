#pragma GCC optimize("O3")
#include<bits/stdc++.h> 
using namespace std;
using ll=long long;
using ull=unsigned long long int;
using P=pair<ll,ll>;
template<class T> using V=vector<T>; 
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
const ll inf=(1e18);
const ll mod=1000000007;
ll gcd(ll a,ll b) {return b ? gcd(b,a%b):a;}
ll lcm(ll c,ll d){return c/gcd(c,d)*d;}
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }
int main(){
  int t;
  cin>>t; 
while(t--){
string s,t;
cin>>s>>t;
ll now=1;
ll a=0,b=0;
for(int i=0;i<s.size();i++){
  if(s[i]<'a')now=ll(s[i]-'0');
  else {
    if(s[i]=='m')a+=now*1000;
    if(s[i]=='c')a+=now*100;
    if(s[i]=='x')a+=now*10;
    if(s[i]=='i')a+=now;
    now=1;
  }
}
now=1;
for(int i=0;i<t.size();i++){
  if(t[i]<'a')now=ll(t[i]-'0');
  else {
    if(t[i]=='m')b+=now*1000;
    if(t[i]=='c')b+=now*100;
    if(t[i]=='x')b+=now*10;
    if(t[i]=='i')b+=now;
    now=1;
  }
}
ll sum=a+b;
V<char> tmp;
int cnt=0;
while(sum){
  cnt++;
  if(sum%10==0){
    sum/=10;
    continue;
  }
  if(cnt==1)tmp.emplace_back('i');
  if(cnt==2)tmp.emplace_back('x');
  if(cnt==3)tmp.emplace_back('c');
  if(cnt==4)tmp.emplace_back('m');
  if(sum%10!=1&&cnt!=4)tmp.emplace_back(char('0'+sum%10));
  if(sum!=1&&cnt==4){
    if(sum/10==0){
      if(sum%10!=1)tmp.emplace_back(char('0'+sum%10));
    }else{
      tmp.emplace_back(char('0'+sum%10));
      sum/=10;
      tmp.emplace_back(char('0'+sum));
    }
  }
  sum/=10;
}
reverse(all(tmp));
for(int i=0;i<tmp.size();i++)cout<<tmp[i];
cout<<"\n";
}
}
