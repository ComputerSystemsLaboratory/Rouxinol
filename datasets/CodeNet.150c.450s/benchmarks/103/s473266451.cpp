#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); i++)

int main()
{
  int n, s, i, j, ans, sum, num;
  while(cin >> n >> s, n + s){
    ans = 0;
    for(i = 0; i < (1 << 10); i++){
      num = sum = 0;
      for(j = 0; j < 10; j++){
        if(1 << j & i){
          num++;
          sum += j;
        }
      }
      if(num == n && sum == s){
        ans++;
      }
    }
    cout << ans << endl;
  }
}