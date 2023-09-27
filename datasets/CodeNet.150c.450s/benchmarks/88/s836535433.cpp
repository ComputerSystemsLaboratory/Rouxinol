#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;
  int size;
  int mnsize;
  int nh,nw;
  while(1){
    cin>>h>>w;
    if(h==0 && w==0) break;
    mnsize=22500;
    size=(h*h+w*w);
    for(int i=1;i<150;i++){
      for(int j=i+1;j<=150;j++){
	if(i*i+j*j>size && mnsize>i*i+j*j){
	  mnsize=i*i+j*j;
	  nh=i;
	  nw=j;
	  break;
	}
	if(i*i+j*j==size && mnsize>i*i+j*j && i>h){
	  mnsize=i*i+j*j;
	  nh=i;
	  nw=j;
	  break;
	}
      }
    }
    cout<<nh<<" "<<nw<<endl;
  }
  return 0;
}

