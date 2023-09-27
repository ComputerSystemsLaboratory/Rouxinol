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
  int x;

  VI array;
  VI oddArray;

  FOR(i,1,200){
    if(i*(i+1)*(i+2)/6 <= 1e6){
      array.push_back(i*(i+1)*(i+2)/6);
      if((i*(i+1)*(i+2)/6) % 2 == 1) oddArray.push_back(i*(i+1)*(i+2)/6);
    }


    else break;
  }
  VI dp(1000010,0);
  VI dpOdd(1000010,0);
  rep(i,array.size()){
    dp[array[i]] ++;
  }
  rep(i,oddArray.size()){
    dpOdd[oddArray[i]] ++;
  }
  rep(j,array.size()){
    rep(k,1e6+1){
      if(dp[k] == 0) continue;
      if(array[j]+k >= 1e6) continue;
      if(dp[array[j]+k] >= 1) dp[array[j]+k] = min(dp[k] + 1,dp[array[j]+k]);
      else dp[array[j]+k] = dp[k] + 1;
    }
  }
  rep(j,oddArray.size()){
    rep(k,1e6+1){
      if(dpOdd[k] == 0) continue;
      if(oddArray[j]+k >= 1e6) continue;
      if(dpOdd[oddArray[j]+k] >= 1) dpOdd[oddArray[j]+k] = min(dpOdd[k] + 1,dpOdd[oddArray[j]+k]);
      else dpOdd[oddArray[j]+k] = dpOdd[k] + 1;
    }
  }

  // rep(i,10){
  //   rep(j,array.size()){
  //     int cnt = 0;
  //     if(array[j] % 2 == 0) continue;
  //     FOR(k,1,1e6+1){
  //       if(dp[k].second == 0) continue;
  //       cnt++;
  //       if(array[j]+k >= 1e6) continue;
  //       if(dp[array[j]].first == 0) continue;
  //       if(dp[array[j]+k].first >= 1) continue;
  //       dp[array[j]+k].first += dp[array[j]].first + 1;
  //     }
  //   }
  //}
  while(true){
    cin >> x;
    if(x == 0) return 0;
    cout << dp[x] << ' ' << dpOdd[x] << endl;
    //printf("%d %d\n",dp[x].first,dp[x].second);
  }
  return 0;
}

