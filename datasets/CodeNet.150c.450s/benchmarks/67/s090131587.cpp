#include<iostream>
using namespace std;

int main(){
  int sum[1010],tmp = 0;

  for(int i=0;i<1001;i++){
    tmp += i;
    sum[i] = tmp;
  }


  int n;
  while(cin >> n,n){
    int ans = 0;
    for(int i=0;i<=n;i++){
      for(int j=i+2;j<=n;j++){
	if(sum[j] - sum[i] == n){
	  ans++;
	  break;
	}
      }
    }
    cout << ans << endl;
  }
}