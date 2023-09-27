#include<iostream>
#include<algorithm>
using namespace std;
#define INF ( 1 << 30 )
int main(){
  int a[100000] , n, k;
  while(cin >> n >> k , n){
    int sum = 0 , ans = -INF;
    for(int i = 0 ; i < n ; i++ ) cin >> a[i];
    for(int i = 0 ; i < k - 1 ; i++ ) sum += a[i];
    for(int i = k - 1 ; i < n ; i++ ){
      sum += a[i];
      ans = max(sum,ans);
      sum -= a[i-k+1];
    }
    cout << ans << endl;
  }
}