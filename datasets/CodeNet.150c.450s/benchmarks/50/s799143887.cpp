#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  const int coins[] = {500,100,50,10,5,1};
  while(cin >> n, n){
    n = 1000-n;
    int ans = 0;
    for(int i=0;i<6;i++){
      while(coins[i] <= n){
	n -= coins[i];
	ans++;
      }
    }
    cout << ans << endl;
  }
}