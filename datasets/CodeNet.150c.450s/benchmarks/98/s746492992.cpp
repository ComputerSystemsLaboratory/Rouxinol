#include<bits/stdc++.h>
using namespace std;





int main(){
  int n, m, s[220], t, a[3];
  
  while(1){
    int sum1 = 0, sum2 = 0, c = 0, b, min = 0;
    cin>>n>>m;
    if(n == 0 && m == 0) break;
    
    for(int i = 1; i <= n; i++){
      cin>>s[i];
      sum1 += s[i];
    }
    
    for(int i = n + 1; i <= n + m; i++){
      cin>> s[i];
      sum2 += s[i];
    }

    t = fabs(sum1 - sum2);
    
    for(int i = 1;  i <= n; i++){
      for(int j = n + 1; j <= n + m; j++){
	if(sum1 + s[j] - s[i] == sum2 + s[i] - s[j]){
	  if(c == 0){
	    a[0] = s[i]; a[1] = s[j];
	    min = s[i] + s[j];
	    c++;
	  } else {
	    if(s[i] + s[j] <= min) {
	      min = s[i] + s[j];
	      a[0] = s[i]; a[1] = s[j];
	    }
	    
	  }
	}
	
      }
      
    }

    if(c == 0) cout<<"-1"<<endl;
    else cout<<a[0]<<" "<<a[1]<<endl;
    
  }
  return 0;
}

