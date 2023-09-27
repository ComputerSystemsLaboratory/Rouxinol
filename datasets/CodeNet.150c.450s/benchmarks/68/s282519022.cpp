#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
  int n, i, ans;
  int alst[1001];
  while(1){
    cin >> n;
    if(n == 0) break;
    for(i=0;i<n;i++) cin >> alst[i];
    sort(alst, alst + n);
    ans = 1000000;
    for(i=0;i<n - 1;i++) ans = min(ans, alst[i + 1] - alst[i]);
    cout << ans << endl;
  }
  return 0;
}

