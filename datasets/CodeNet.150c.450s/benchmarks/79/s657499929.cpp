#include<bits/stdc++.h>

using namespace std;

int main(){
  

  while(1){
    int n,r;
    cin>>n>>r;

    if(n==0 && r==0)break;
    
    int x[n];

    int p,c,k=0;


    for(int i=0;i<n;i++){
      k++;
      x[i]=k;
    }

    for(int j=1;j<=r;j++){
      
      cin>>p>>c;
      int y[p];
      int z[c];
      
      for(int i=0;i<p-1;i++){
	y[i]=x[n-p+1+i];
      }
      
      for(int i=0;i<c;i++){
	z[i]=x[n-p-c+1+i];
      }
      
      for(int i=0;i<c;i++){
	x[n-c+i]=z[i];
      }
      
      for(int i=0;i<p-1;i++){
	x[n-c-p+1+i]=y[i];
      }
    
      
    }
    
    
    cout<<x[n-1]<<endl;
    
    
  }
}

