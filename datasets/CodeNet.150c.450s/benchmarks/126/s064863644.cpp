#include<iostream>
#include<cstdio>
using namespace std;

int x,y,n,root[111][111],dame1[111],dame2[111];
int main(){
  while(1){
    cin >> x >> y;
    if(x == 0 && y == 0)break;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> dame1[i] >> dame2[i];
    }
    root[1][1]=1;
    root[0][0]=0;
    if(x > 0 && y > 0){
      for(int i=1;i<111;i++){
	root[0][i]=0;
	root[i][0]=0;
      }
      for(int j=1;j<111;j++){
	for(int i=1;i<111;i++){
	  if(i==1 && j==1){
	  }
	  else{
	    root[i][j]=root[i-1][j] + root[i][j-1];
	  }
	  for(int k=0;k<n;k++){
	    if(i == dame1[k] && j == dame2[k]){
	      root[i][j] = 0;
	    }
	  }
	}
      }
    }
    cout << root[x][y] << endl;
  }
}