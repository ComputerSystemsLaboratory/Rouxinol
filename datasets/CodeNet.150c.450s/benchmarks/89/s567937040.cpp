#include<bits/stdc++.h>
using namespace std;


int main(){
  while(true){
    int a, d, n, cnt = 0, ans;
    
    scanf("%d%d%d", &a, &d, &n);

    if(a + d + n == 0) break;

    for(int i=a;cnt != n; i += d){
      if(i == 2 || i == 3){
	++cnt;
      }
      else{
	for(int k=2;k <= sqrt(i);++k){
	  if(i%k == 0) break;
	  if(k == static_cast<int>(sqrt(i))) ++cnt;
	}
      }
      if(cnt == n) ans = i;
    }
    cout << ans << endl;
  }
  
  return 0;
}

