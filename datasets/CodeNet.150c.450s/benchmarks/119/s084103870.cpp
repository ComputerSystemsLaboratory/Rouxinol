#include<bits/stdc++.h>
using namespace std;
int main(){
  int w,h,ans;
  bool b;
  int mp[70][70];
  while(1){
    cin>>w>>h;
    if(w==0 && h==0) break;
    for(int i=0;i<70;i++){
      for(int j=0;j<70;j++){
	mp[i][j]=0;
      }
    }
    ans=2;
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
	cin>>mp[i][j];
      }
    }
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
	b=true;
	if(mp[i][j]==1){
	  mp[i][j]=ans;
	  while(b){
	    b=false;
	    for(int k=1;k<=h;k++){
	      for(int l=1;l<=w;l++){
		if(mp[k][l]==ans){
		  for(int m=k-1;m<=k+1;m++){
		    for(int n=l-1;n<=l+1;n++){
		      if(mp[m][n]==1){
			mp[m][n]=ans;
			b=true;
		      }
		    }
		  }
		}
	      }
	    }
	  }
	  ans++;
	}
      }
    }
    cout<<ans-2<<endl;
  }
  return 0;
}
	  

