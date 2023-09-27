#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
long long int sum[111111];
int main(void)
{
  while(1){
    int n,k;
    cin >> n >> k;
    if(!n && !k) break;
    for(int i = 1; i <= n; i++){
      int a;
      cin >> a;
      sum[i] = sum[i-1] + a;
    }
    long long int best = -11111111111;
    for(int i = 0; i + k <= n; i++){
      best = max(best,sum[i+k] - sum[i]);
    }
    cout << best << endl;;
  }
}