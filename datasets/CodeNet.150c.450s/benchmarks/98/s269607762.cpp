#include <iostream>
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
#define BIGNUM 999
using namespace std;

int main()
{
  typedef pair<int, int> pii;
  int n, m;
  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }else{
      pii ans;
      int t[n], h[m];
      int ts, hs, anss;
      ts = hs = 0;
      ans.first = ans.second = 0;
      anss = BIGNUM;
      REP(i, n){
        cin >> t[i];
        ts += t[i];
      }
      REP(i, m){
        cin >> h[i];
        hs += h[i];
      }
      if(ts < hs){
        int sub = hs - ts;
        REP(i, n){
          REP(j, m){
            if(t[i] <= h[j] && (h[j] - t[i]) * 2 == sub)
              if(t[i] + h[j] < anss){
                ans.first = t[i];
                ans.second = h[j];
                anss = ans.first + ans.second;
              }
          }
        }
      }else if(ts == hs){
        REP(i, n){
          REP(j, m){
            if(t[i] == h[j])
              if(t[i] + h[j] < anss){
                ans.first = t[i];
                ans.second = h[j];
                anss = ans.first + ans.second;
              }
          }
        }
      }else{
        int sub = ts - hs;
        REP(i, m){
          REP(j, n){
            if(h[i] <= t[j] && (t[j] - h[i]) * 2 == sub)
              if(t[i] + h[i] < anss){
                ans.first = t[j];
                ans.second = h[i];
                anss = ans.first + ans.second;
              }
          }
        }
      }
      if(ans.first == 0)
        cout << "-1" << endl;
      else
        cout << ans.first << " " << ans.second << endl;
    }
  }
}