#include<iostream>
#include<cmath>
using namespace std;
int Bsearch(int n,int e){
  if(e==1)return 1;
  int s,t;
  s=0;t=e;
  int x=e/2;
  while(t-s>1){
    if(pow(x,n)<e){
      s=x;
    }else if(pow(x,n)>e){
      t=x;
    }else{
      break;
    }
    x=(s+t)/2;
  }
  return x;
}
 
int main(){
  int e;
  while(cin>>e){
    if(e==0)break;
    int x=Bsearch(3,e);
    int y=Bsearch(2,e);
    int minim=1000;
    for(int i=0;i<=x;i++){
      int z=pow(i,3);
      for(int j=0;j<=y;j++){
	int x=e-z-j*j;
	if(x<0)break;
	minim=min(minim,i+j+x);
      }
    }
    cout << minim << endl;
  }
  return 0;
}