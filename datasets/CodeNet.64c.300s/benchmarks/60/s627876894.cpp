#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<algorithm>
#include<queue>
#include <functional>
using namespace std;

int main(){
  
  int a,b,n,root;
  int x[111],y[111];

  while(1){
    int mapp[1111][1111]={0};
    cin >> a >> b;
    if(a == 0 && b == 0)break;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x[i] >> y[i];
      mapp[x[i]][y[i]]=-1;
    }
    mapp[1][1]=1;
    for(int i=1;i<=a;i++){
      for(int j=1;j<=b;j++){
	if(mapp[i][j]!=-1){
	  if(i!=1 && mapp[i-1][j]!=-1){
	    mapp[i][j]+=mapp[i-1][j];
	  }
	  if(j!=1 && mapp[i][j-1]!=-1){
	    mapp[i][j]+=mapp[i][j-1];
	  }
	}
      }
    }
    cout << mapp[a][b] << endl;
  }
}