#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int a, d, n;
  vector<int> f(1000000 + 1, 0);
  for(int i = 2; i <= sqrt(1000000); i++){
    if(f[i] == 0){
      for(int j = 2 * i; j <= 1000000; j+=i){
        f[j] = 1;
      }
    }
  }
  while(cin >> a >> d >> n, a||d||n){
    int cnt = 0, ans;
    for(int i = a;; i+=d){
      if(i != 1 && f[i] == 0)cnt++;
      if(cnt == n){
        ans = i;
        break;
      }
    }
    cout << ans << endl;
  }
}