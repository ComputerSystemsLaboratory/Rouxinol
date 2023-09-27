#include<bits/stdc++.h>

#define lp(i,n) for(int i=0;i<n;i++)
#define lpin(a,i,n) for(int i=0;i<n;i++){cin>>a[i];}
using namespace std;
int a[10][5],check[10][5];
int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0) break;
    lp(i,10){
      lp(j,5){
	a[i][j]=-1;
	check[i][j]=0;
      }
    }
    
    for(int i=n-1;i>=0;i--){
      lp(j,5){
	cin>>a[i][j];
      }
    }
    int ans=0;
    while(1){
      int r=0;
      lp(i,n){
	lp(j,3){
	  if(a[i][j]!=-1&&a[i][j]==a[i][j+1]&&a[i][j+2]==a[i][j+1]){
	    check[i][j]=1;
	    check[i][j+1]=1;
	    check[i][j+2]=1;
	    r=1;
	  }
	}
      }
      if(r==0) break;
      
      lp(i,n){
	while(1){
	  int x=0;
	  lp(j,5){
	    if(check[i][j]==1){
	      ans+=a[i][j];
	      for(int k=i;k<n;k++){
		a[k][j]=a[k+1][j];
		a[k+1][j]=-1;
		check[k][j]=check[k+1][j];
		check[k+1][j]=0;
		x=1;
	      }
	    }
	  }
	  if(x==0) break;
	}
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

