#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i;
  int x[200],y[200],n,d,p;
  int xmn,xmx,ymn,ymx;
  while(cin>>n&&n){
    x[0]=y[0]=xmn=xmx=ymn=ymx=0;
    for(i=1;i<n;i++){
      cin>>d>>p;
      if(0){
      }else if(p==0){
	x[i]=x[d]-1;
	y[i]=y[d];
	if(xmn>x[i])
	  xmn=x[i];
      }else if(p==1){
	x[i]=x[d];
	y[i]=y[d]+1;
	if(ymx<y[i])
	  ymx=y[i];
      }else if(p==2){
	x[i]=x[d]+1;
	y[i]=y[d];
	if(xmx<x[i])
	  xmx=x[i];
      }else if(p==3){
	x[i]=x[d];
	y[i]=y[d]-1;
	if(ymn>y[i])
	  ymn=y[i];
      }
    }
    cout<<xmx-xmn+1<<" "<<ymx-ymn+1<<endl;
  }
  return 0;
}