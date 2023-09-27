#include <iostream>
using namespace std;
bool so[1000001];
int main() {

  so[0] = so[1] = 1;
  for(int i=2;i*i<=1000000;i++){
    if(so[i] == 0){
      for(int j=2;j<=1000000/i;j++) so[i*j] = 1;
    }
  }
  // for(int i=0;i<1000001;i++)if(so[i] == 0) cout << i<<endl;
  
  while(1){
    int a,d,n;
    cin>>a>>d>>n;
    if(a == 0 &&d == 0 && n == 0) break;

    int ans = a;
    int cnt = 0;
    while(1) {
      if(so[ans] == 0) cnt++;
      if(cnt == n) break;
      ans += d;
    }

    cout << ans <<endl;

  }

  return 0;
}