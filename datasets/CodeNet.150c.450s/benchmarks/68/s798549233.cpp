#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){


  int n,a[1000],r[50000],c=0;
  
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=0; i<n;++i){
      cin >> a[i];
    }

    if(a[0]==a[1]){
      r[c] == 0;
    }else if(a[0]>a[1]){
      r[c] =a[0]-a[1] ;
    }else   r[c] =a[1]-a[0] ;
    
    for(int i=0; i<n;++i){
      if(r[c]==0) break;
      for(int k=0; k<n;++k){
	if(a[i]==a[k]){
	  if(i!=k) r[c] = a[i] - a[k];
	}else if(a[i]>a[k]){
	  if(r[c] > a[i]-a[k]) r[c] = a[i]-a[k];
	}else if(r[c] > a[k]-a[i]) r[c] = a[k]-a[i];
      }
    }
    ++c;
  }

  for(int i=0; i<c;++i){
    cout << r[i] << endl;
  }
  
  
  return 0;
}

