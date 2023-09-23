#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,s;
  while(1){
    cin >> n >> m >> s;
    if(n == 0 && m == 0 && s == 0) break;
    int ans = 0;
    for(int i=s-1;i>=1;i--){
      for(int j=1;j<=s-1;j++){
	int x = i*(100+n)/100;
	int y = j*(100+n)/100;
	if(x+y == s) {
	  ans = max(ans,(i*(100+m)/100)+(j*(m+100)/100));
	}
      }
    }
    cout << ans << endl;
  } 
}