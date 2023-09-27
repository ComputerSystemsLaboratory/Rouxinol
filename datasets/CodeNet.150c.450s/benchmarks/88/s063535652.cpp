#include <iostream>
using namespace std;
int main(){
  int h,w,x,i,j,xcom,hout,wout,flag,xmin;
  while(1){
    flag=0;
    cin >> h >> w;
    if(h==0&&w==0) break;
    x=h*h+w*w;
    xmin=100000;
    for(i=1;i<151;i++){
      for(j=i+1;j<151;j++){
	xcom=i*i+j*j;
        if(x==xcom&&h<i){
          hout=i;
	  wout=j;
	  flag=1;
	  break;
	}
	if(x<xcom&&xcom<xmin){
	  hout=i;
	  wout=j;
	  xmin=xcom;
	}
      }
      if(flag==1) break;
    }
    cout << hout << ' ' << wout << endl;
  }
  return 0;
}