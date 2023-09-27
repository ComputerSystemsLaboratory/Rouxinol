#include<iostream>
using namespace std;

int main(){
  pair<int,int> p;
  while(1){
    int h,w,di,ndi,min=1000000,f=0;
  cin>>h>>w;
  di=h*h+w*w;
  if(h+w==0) break;
   for(int i=1;i<=150;i++){
    for(int j=1;j<=150;j++){
      ndi=i*i+j*j;
      if(ndi==di && i>h && i<j &&f==0){
	p.first=i;
	p.second=j;
	min=ndi;
	f=1;
      }else if(ndi>di && i<j && ndi<min){
	p.first=i;
	p.second=j;
	min=ndi;
      }
    }
  }

  cout<<p.first<<" "<<p.second<<endl;
  }
  return 0;
}