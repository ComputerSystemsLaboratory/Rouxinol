#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){

  while(1){
    int n,m,p;
    cin >> n >> m >> p;
    if(n==0) break;
    int x[1000],sum=0;
    rep(i,n){
      cin >> x[i];
      sum += x[i]*100;
    }
    sum = sum - sum * p /100;
    int ans = 0;
    if(x[m-1] != 0) ans =  sum / x[m-1];
    cout << ans << endl;
  }

}