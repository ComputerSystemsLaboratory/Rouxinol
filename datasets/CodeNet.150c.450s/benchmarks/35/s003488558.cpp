#include <iostream>
#include <vector>

using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main() {
  
  int N;
  while(cin >> N && N) {
    vector<int> in(N), v(N);
    rep(i, N) cin >> in[i];
    int ans = -1<<29;
    rep(i, N) {      
      if(i-1 >= 0 && v[i-1] >= 0) {
	v[i] += v[i-1] + in[i];
      }
      else {
	v[i] = in[i];
      }
      ans = max(ans, v[i]);
    }
    cout << ans << endl;
  }
  
  return 0;
}