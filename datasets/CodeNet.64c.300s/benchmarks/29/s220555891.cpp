#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int Bsearch(int e,int n){
  //cout << n << endl;
  int l=0,r=e;
  int i=(l+r)/2;
  while(r-l>=1){
    i=(l+r)/2;
    //cout << "i:" << i << endl;
    if(e == pow(i,n)){
      //cout << "aaa:" << i << endl;
      return i;
    }else if(e > pow(i,n)){
      l=i+1;
    }else{
      r=i;
    }
  }
  //cout << "i:" << i << endl;
  return i;
}

int a[2000][2000];

int main(){
  int x,y,z,e;
  while(cin>>e,e){
    memset(a,0,sizeof(a));
    y=Bsearch(e,2);
    z=Bsearch(e,3);

    int m=1000000;
    //cout << "z:" << z << " y:" << y << endl;
    for(int i=0;i<=1000;i++){
      for(int j=0;j<=100;j++){
	x=e-i*i-j*j*j;
	if(x>=0)m = min(x+i+j,m);
      }
    }
    cout <<m << endl; 
  }
}