#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;


//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
  int n;
  cin >> n;
  map<char,ll> mp;
  mp['m'] = 1000;
  mp['c'] = 100;
  mp['x'] = 10;
  mp['i'] = 1;

  rep(z,n){
    string s1,s2;
    cin >> s1 >> s2;
    ll a=0,b=0;
    rep(i,s1.size()){
      if(s1[i] >= '0' && s1[i] <= '9'){
        a += (ll)(s1[i]-'0')*mp[s1[i+1]];
        i++;
      }else{
        a += mp[s1[i]];
      }
    }
    rep(i,s2.size()){
      if(s2[i] >= '0' && s2[i] <= '9'){
        a += (ll)(s2[i]-'0')*mp[s2[i+1]];
        i++;
      }else{
        a += mp[s2[i]];
      }
    }
    //decode
    ll sum = a+b;
    string ans = "";
    if(sum%10 >= 2) {
      ans = ans + toString(sum%10) + "i";
    }else if(sum % 10 == 1){
      ans = ans + "i";
    }
    sum/= 10;
    if(sum%10 >= 2) ans = toString(sum%10) + "x" + ans;
    else if(sum % 10 == 1){
      ans = "x" + ans;
    }
    sum/= 10;
    if(sum%10 >= 2) ans = toString(sum%10) + "c" + ans;
    else if(sum % 10 == 1){
      ans = "c" + ans ;
    }
    sum/= 10;
    if(sum%10 >= 2) ans = toString(sum%10) + "m" + ans;
    else if(sum % 10 == 1){
      ans = "m" + ans;
    }
    cout << ans << endl;
  }
  return 0;
}

