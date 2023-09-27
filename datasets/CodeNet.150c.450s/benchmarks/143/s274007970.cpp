#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> cnt(100001,0);
  long long ans = 0;
  rep(i,n) {
    cin >> a[i];
    ans += a[i];
    cnt[a[i]]++;
  }
  int q;
  cin >> q;
  vector<int> b(q);
  vector<int> c(q);
  rep(i,q) cin >> b[i] >> c[i];
  rep(i,q){
    int d = c[i] - b[i];
    ans += d * cnt[b[i]];
    cout << ans << endl;
    cnt[c[i]] += cnt[b[i]];
    cnt[b[i]] = 0;
  }
  return 0;
}
