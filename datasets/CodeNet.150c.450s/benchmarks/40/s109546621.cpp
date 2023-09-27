#include<bits/stdc++.h>
// Hey! 僕の提出を見てくれてありがとう.
// ロボ子さん可愛いぞ！！！！！君もV沼にはまろう↓
// https://www.youtube.com/channel/UCDqI2jOz0weumE8s7paEk6g
using namespace std;
/*
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
namespace mp = boost::multiprecision;// 任意長整数型
using bint = mp::cpp_int;// 仮数部長が32の浮動小数点数型
using real32 = mp::number<mp::cpp_dec_float<32>>;// 仮数部長が1024の浮動小数点数型
using real1024 = mp::number<mp::cpp_dec_float<1024>>;// ついでに有理数型
using rat = boost::rational<bint>;
*/
using ll = long long;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}//a,bの最大公約数(gcd)を求める
ll lcm(ll a,ll b){return abs(a*b)/gcd(a,b);}//a,bの最小公倍数(lcm)を求める
vector<ll> enum_div(ll n){vector<ll> ret;for(int i=1 ; i*i<=n ; i++){if(n%i == 0){ret.push_back(i);if(i!=1 && i*i!=n)ret.push_back(n/i);}}ret.push_back(n);return ret;}
//↑nの約数を求める
vector<bool> IsPrime; void sieve(size_t max){if(max+1 > IsPrime.size())IsPrime.resize(max+1,true);IsPrime[0] = false;IsPrime[1] = false;for(size_t i=2; i*i<=max; ++i)if(IsPrime[i])for(size_t j=2; i*j<=max; ++j)IsPrime[i*j] = false;}
//↑エラトステネスの篩で素数を求める
#define roundup(divisor,dividend) (divisor + (dividend - 1)) / dividend //切り上げ割り算
#define all(x) (x).begin(),(x).end() //xの初めから終わりまでのポインタ
#define size_t ll //size_tは自動でllに変換される
#define pb(x) push_back(x)
#define pri_queue priority_queue //優先度付きキュー
#define syo(x) fixed << setprecision(x) //iostreamで小数をx桁表示
//sortを降順にする時は greater<型>()

struct dice {
  ll s[6];
  ll &top()   {return s[0];}
  ll &south() {return s[1];}
  ll &east()  {return s[2];}
  ll &west()  {return s[3];}
  ll &north() {return s[4];}
  ll &bottom(){return s[5];}
  void roll(char c){
    string b("EWNSRL");
    int v[6][4]={{0,3,5,2},
                 {0,2,5,3},
                 {0,1,5,4},
                 {0,4,5,1},
                 {1,2,4,3},
                 {1,3,4,2}};
    for(int k=0;k<6;k++){
      if(b[k]!=c) continue;
      int t=s[v[k][0]];
      s[v[k][0]]=s[v[k][1]];
      s[v[k][1]]=s[v[k][2]];
      s[v[k][2]]=s[v[k][3]];
      s[v[k][3]]=t;
    }
  }
};

int main(){ //srand((unsigned)time(NULL));
  dice x;
  for (int i = 0; i < 6; i++) {
    cin >> x.s[i];
  }
  string S;cin >> S;
  for (int i = 0; i < S.length(); i++) {
    x.roll(S[i]);
  }
  cout << x.top() << endl;
}

