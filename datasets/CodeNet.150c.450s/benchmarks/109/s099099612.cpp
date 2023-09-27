//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2013
//大崎
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

std::vector<std::string> split(const std::string& input, char delimiter){
  std::istringstream stream(input);
  std::string field;
  std::vector<std::string> result;
  while (std::getline(stream, field, delimiter)) {
    result.push_back(field);
  }
  return result;
}

ll solve(){
  vector<vector<vector<ll>>> hms(24+1,vector<vector<ll>>(60+1, vector<ll>(60+1)));
  ll n; cin>>n;
  if (n==0)return -1;
  REP(i,n){
    string s,e; cin>>s>>e;
    auto gett =[](const string& is){
      vector<ll> ret;
      auto lst=split(is,':');
      REP(ii,3){
        int v=std::atoi(lst.at(ii).c_str());  
        ret.push_back(v);
      }
      return ret;
    };
    auto stt = gett(s);
    auto edd = gett(e);
    // dump(stt);
    // dump(edd);
    hms[stt[0]][stt[1]][stt[2]] += 1;

    // edd[2] += 1;
    // if(edd[2]==60){
    //   edd[2]=0;
    //   edd[1]+=1;
    //   if(edd[1]==60){
    //     edd[1]=0;
    //     edd[0]+=1;
    //   }
    // }
    hms[edd[0]][edd[1]][edd[2]] -= 1;
  }

  ll v= 0;
  ll ans=0;
  REP(h,24){
    REP(m,60){
      REP(s,60){
        v += hms[h][m][s];
        chmax(ans,v);
      }
    }
  }
  cout<<ans<<endl;
  return ans;
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
  while(solve()!=-1){
  }
  return 0;
}
