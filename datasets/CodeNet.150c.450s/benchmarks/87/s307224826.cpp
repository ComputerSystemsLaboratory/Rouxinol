#include<bits/stdc++.h>
using namespace std;

int solve(int h,vector<vector<int>> &f){
  int res=0;
  bool update=false;
  for(int i=0;i<h;i++){
    int cnt=1;
    for(int j=1;j<=5;j++){
      if(j<5 && f[i][j-1]==f[i][j] && f[i][j-1]!=0){
	cnt++;
      }
      else{
	if(cnt>=3){
	  update=true;
	  int num=f[i][j-1];
	  for(int k=j-cnt;k<j;k++){
	    res+=num;
	    f[i][k]=0;
	  }
	}
	cnt=1;
      }
    }
  }

  for(int i=0;i<h*2;i++){
    for(int j=h-1;j>0;j--){
      for(int k=0;k<5;k++){
	if(f[j][k]==0 && f[j-1][k]!=0){
	  swap(f[j][k],f[j-1][k]);
	}
      }
    }
  }

  if(update){
    return res+solve(h,f);
  }
  else{
    return res;
  }
}
int main(){
  int h;
  while(cin>>h,h){
    vector<vector<int>> f(h,vector<int>(5,0));
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
	cin>>f[i][j];
      }
    }

    cout<<solve(h,f)<<endl;
  }
  
  return 0;
}
