#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
  int n;
  cin >> n;
  ll tot = 0;
  vector<ll> cnt(100005);
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    cnt[a]++;
    tot += a;
  }
  
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    int b, c;
    cin >> b >> c;
    tot += (c-b)*cnt[b];
    cnt[c] += cnt[b];
    cnt[b] = 0;
    cout << tot << endl;
  }
  return 0;
}