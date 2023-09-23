#include <iostream>
using namespace std;
int main(){
  int n,x,i,j,k,cnt;
  while(1){
    cnt=0;
    cin >> n >> x;
    if(n==0&&x==0) break;
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
	for(k=1;k<=n;k++){
	  if(i!=j&&j!=k&&k!=i&&i+j+k==x) cnt++;
	}
      }
    }
    cout << cnt/6 << endl;
  }
  return 0;
}