#include <iostream>
using namespace std;

int main(){
  while(1){
    int n,m,p;
    int x[110]={};
    cin >> n >> m >> p;
    if(n == 0 && m == 0 && p == 0)break;
    int ans=0;
    for(int i=1;i<=n;i++){
      cin >> x[i];
      ans += 100 * x[i];
    }
    int pe = x[m];
    ans = ans - ans*p/100;
    if(pe != 0)
      ans = ans / pe;
    else 
      ans=0;
    cout << ans << endl;
  }
  return 0;
}