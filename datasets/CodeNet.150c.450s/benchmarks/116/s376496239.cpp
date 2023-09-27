#include <iostream>
using namespace std;

int n, k;
int t[100002];

int main(){

  while(cin >> n >> k, n || k){
    int sum = 0;

    for(int i = 0; i < n; i++){
      cin >> t[i];
      if(i < k) sum += t[i];
    }

    int ans = sum;

    for(int i = 0; i < n - k; i++){
      sum -= t[i];
      sum += t[i + k];
      ans = max(ans, sum);
    }
    cout << ans << endl;
  }
}