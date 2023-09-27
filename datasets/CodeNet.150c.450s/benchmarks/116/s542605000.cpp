#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,k;
  while(cin >> n >> k) {
    if(n+k == 0) break;
    vector<int> seq(n);
    for(int i=0;i<n;i++) {
      cin >> seq[i];
    }
    int wa = 0;
    for(int i=0;i<k;i++) {
      wa += seq[i];
    }
    int st = 0;
    int now = wa;
    for(int en=k;en<n;en++) {
      now = now - seq[st] + seq[en];
      st++;
      wa = max(wa,now);
    }
    cout << wa << endl;
  }
}