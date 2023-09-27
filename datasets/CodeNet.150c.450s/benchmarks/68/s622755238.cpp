#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,ans,t;
  int a[1000];
  while(1){
  cin >> n;
  if(n==0) break;
  for(int i=0; i<n; i++){
	cin >> a[i];
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
	t = a[i] - a[j];
	if(t<0) t = t*(-1);
	if(i==0 && j==i+1) ans = t;
	ans = min(ans,t);
    }
  }
  cout << ans << endl;
  }
  return 0;
}
