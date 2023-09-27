#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n, sum, ans, a[5001];
  while(1){
    cin >> n;
    if(n == 0) 
      break;
    ans = -100000;
    for(int i = 0; i < n; i++)
      cin >> a[i];
    for(int i = 0; i < n; i++){
      sum = 0;
      for(int j = i; j < n; j++){
        sum += a[j];
        ans = max(ans,sum);
      }
    }
    cout << ans << endl;
  }
}