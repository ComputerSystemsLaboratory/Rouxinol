#include <bits/stdc++.h>

using namespace std;
typedef long long int LL;
typedef long long int ll;
typedef pair<long long int, long long int> pii;
typedef pair<double, double> pdd;

#define SORT(c) sort((c).begin(),(c).end())
#define BACKSORT(c) sort((c).begin(),(c).end(),std::greater<LL>())
#define FOR(i,a,b) for(LL i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define SP << " " <<

LL mod = 1000000007;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  while(true){
    LL n;
    cin >> n;
    if(n==0){
      break;
    }

    bool left = false;
    bool right = false;

    LL cnt = 0;
    
    REP(i,n){
      string s;
      cin>>s;
      if(s[0]=='l'){
        left = !left;
      }
      else
      {
        right = !right;
      }
      if(cnt%2==0){
        if(left&&right){
          cnt++;
        }
      }else{
        if(!left&&!right){
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}

