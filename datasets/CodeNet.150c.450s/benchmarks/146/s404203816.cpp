#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Pow(ll x,ll y){
  ll ans = 1;
  while(y){
    if(y%2) ans *= x;
    x *= x;
    y >>= 1;
  }
  return ans;
}
ll to_decimal(string s,ll B){
  int t = s.find("."),i,n = s.size();
  if(t == string::npos) return -1;
  if(s.size()-t-1 > B) return -1;
  ll ans = 0,x = Pow(10,B+t+1-s.size());
  bool minus = s[0] == '-';
  for(i=s.size()-1;i>=minus;i--){
    if(i == t) continue;
    if(s[i] == '-') ans = -ans;
    else ans += (s[i]-'0')*x;
    x *= 10;
  }
  if(minus) ans = -ans;
  return ans;
}
int main(){
  ll x1,y1,x2,y2,x3,y3,x4,y4;int n,i;
  string a,b,c,d,e,f,g,h;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    x1 = to_decimal(a,5);
    y1 = to_decimal(b,5);
    x2 = to_decimal(c,5);
    y2 = to_decimal(d,5);
    x3 = to_decimal(e,5);
    y3 = to_decimal(f,5);
    x4 = to_decimal(g,5);
    y4 = to_decimal(h,5);
    printf((x2-x1)*(y4-y3) == (x4-x3)*(y2-y1) ? "YES\n":"NO\n");
  }
}
