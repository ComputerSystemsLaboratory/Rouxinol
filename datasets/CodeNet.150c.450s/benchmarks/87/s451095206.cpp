#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,ans;
  int map[10][7];
  bool b;
  while(1){
    cin>>h;
  if(h==0) break;
  b=true;
  ans=0;
  for(int i=0;i<10;i++){
    for(int j=0;j<7;j++){
      map[i][j]=0;
    }
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<5;j++){
      cin>>map[i][j];
    }
  }
  while(b){
    /*cout<<endl;*/
    b=false;
  for(int i=0;i<h;i++){
    for(int j=0;j<3;j++){
      if(map[i][j]==0) continue;
      if(map[i][j]==map[i][j+1] && map[i][j]==map[i][j+2]){
	b=true;
	if(map[i][j]==map[i][j+3]){
	  if(map[i][j]==map[i][j+4]){
	    for(int k=j;k<j+5;k++){
	       ans+=map[i][k];
	       map[i][k]=0;
	    }
	  }
	  else for(int k=j;k<j+4;k++){
	      ans+=map[i][k];
	      map[i][k]=0;
	    }
	}
	else for(int k=j;k<j+3;k++){
	    ans+=map[i][k];
	      map[i][k]=0;
	  }
      }
    }
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<5;j++){
      if(map[i][j]==0){
	for(int k=i;k>=0;k--){
	  if(k==0) map[k][j]=0;
	  else map[k][j]=map[k-1][j];
	}
      }
    }
  }
  /*for(int i=0;i<h;i++){
    for(int j=0;j<5;j++){
      cout<<map[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<ans<<endl;*/
  }
  cout<<ans<<endl;
  }
  return 0;
}

