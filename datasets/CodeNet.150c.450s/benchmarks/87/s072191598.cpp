#include <iostream>
#include <algorithm>
using namespace std;
int h;
int w=5;
int tbl[10][10];
int main(){
  while(cin>>h,h){
    for(int i=0;i<h;++i) for(int j=0;j<w;++j) cin >>tbl[h-i-1][j];
    int score=0;
    while(true){
      bool dis = false;
      for(int i=0;i<h;++i){
	int c = 1;
	int cur = tbl[i][0];
	for(int j=1;j<=w;++j){
	  if(tbl[i][j]==cur){
	    ++c;
	  }
	  else{
	    if(c>=3 && cur){
	      dis=true;
	      score+=cur*c;
	      for(int k=0;k<c;++k) tbl[i][j-k-1]=0;
	      break;
	    }
	    cur = tbl[i][j];
	    c=1;
	  }
	}
      }
      if(!dis) break;
      for(int j=0;j<w;++j){
	int tmp[10]={};
	int p=0;
	for(int i=0;i<h;++i) if(tbl[i][j]!=0) tmp[p++]=tbl[i][j];
	for(int i=0;i<h;++i) tbl[i][j]=tmp[i];
      }
    }
    cout << score << endl;
  }
  return 0;
}