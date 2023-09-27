#include<iostream>
using namespace std;

int main(){
  int n, m, p, x[101], ans;

  while(cin >> n >> m >> p && n){
    int sum=0;
    for(int i=1; i<=n; i++){
      cin >> x[i];
      sum+=x[i];
    }
    if(x[m]!=0){
      ans = sum * (100-p) / x[m];
      cout << ans << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}