#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n, a[1001], ans=1000000;

  while(cin >> n && n){
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(ans>abs(a[i]-a[j]) && i!=j){
        ans = abs(a[i]-a[j]);
      }
    }
  }
  cout << ans << endl;
  ans = 1000000;
  }
  return 0;
}