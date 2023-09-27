//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1193&lang=jp
//連鎖消滅パズル
#include <bits/stdc++.h>
#if LOCAL
#include "dump.hpp"
#else
#define dump(...)
#endif
using namespace std;
using ll=long long;
const ll LINF = 0x1fffffffffffffff;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
template<class T>bool chmax(T &a, const T &b) {if (a<b) { a=b; return 1; } return 0;}
template<class T>bool chmin(T &a, const T &b) {if (b<a) { a=b; return 1; } return 0;}
bool solve(){
  ll h; cin>>h;
  if(h<=0) return false;
  vector<vector<ll>> tbl(h,vector<ll>(5));
  for(auto&& l:tbl){
    for(auto&& v:l) cin>>v;
  }

  auto calc = [](vector<ll>& tbl){
    ll result=0;
    REP(i,tbl.size()){
      ll num=0;
      if(tbl.at(i)==0)continue;
      FOR(j,i+1,tbl.size()){
        if(tbl.at(i)!=tbl.at(j)) break;
        ++num;
      }
      ++num;
      if(num>=3){//先頭も含む
        FOR(j,i,i+num){
          result += tbl.at(j);
          tbl.at(j)=0; //消す
        }
        break;
      }
    }
    return result;
  };
  auto otosu =[&](){
    FOR(x,0,5){
      for(ll y=h-1;y>=0;--y){
        if(tbl[y][x]==0){
          for(ll y2=y-1;y2>=0;--y2){
            if(tbl[y2][x]!=0){
              swap(tbl[y][x],tbl[y2][x]);
              break;
            }
          }
        }
      }
    }
  };

  ll ans=0;
  do{
    dump(tbl); dump(ans);
    ll tmp=0;
    FOR(i,0,tbl.size()){
      tmp += calc(tbl.at(i));//消す
    }
    if(tmp==0)break;
    ans += tmp;
    //落す
    otosu();
  }while(true);
  cout<<ans<<endl;
  return true;
}
int main() {
#if LOCAL&01
  //std::ifstream in("./test/sample-1.in");
  std::ifstream in("./input.txt");
  std::cin.rdbuf(in.rdbuf());
#else
  cin.tie(0);
  ios::sync_with_stdio(false);
#endif
  while(solve()){
  }
  return 0;
}
