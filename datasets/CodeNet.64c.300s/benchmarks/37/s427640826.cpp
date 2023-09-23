#include<iostream>
using namespace std;

int main(){
  int n;
  int sum[1001];

  sum[0] = 0;
  for(int i=1;i<=1000;i++)sum[i] = sum[i-1]+i;
    
  while(cin >> n && n){

    int ans = 0;
    for(int i=0;i<=n;i++){
      for(int j=0;j<i-1;j++){
	if(sum[i]-sum[j] == n)ans++;
      }
    }

    cout << ans << endl;
  }
}