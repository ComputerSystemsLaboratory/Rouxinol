#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, s, n) for(int i = s; i < n; i++)
using namespace std;

const int T = 24 * 60 * 60;

int main(){
  istringstream ss;
  while(1){
    int n;
    cin >> n;
    if (n == 0) break;
    vector<int> sum(T+1, 0);
    rep(i, n){
      vector<string> s(2);
      cin >> s[0] >> s[1];
      rep(k, 2){
        int t = 0;
        rep(j, 3){
          ss = istringstream(s[k].substr(j*3, 2));
          int num; ss >> num;
          t += num * pow(60, 2-j);
        }
        if (k == 0) sum[t]++;
        else sum[t]--;
      }
    }
    
    int ans = sum[0];
    rep(i, T){
      sum[i+1] += sum[i];
      ans = max(ans, sum[i+1]);
    }
    cout << ans << endl;
  }
  
  return 0;
}
