#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int N,n,d,i,xMax,xMin,yMax,yMin,ix[200],iy[200],h,w;
  while(1){
    cin >> N;
    if(N==0) break;
    ix[0]=iy[0]=0;    //location(i)=(ix,iy)
    xMax=xMin=yMax=yMin=0;
    for(i=1;i<N;i++){
      cin >> n >> d;
      if(d==0){
	ix[i]=ix[n]-1;
	iy[i]=iy[n];
	xMin=min(ix[i],xMin);
      }
      else if(d==1){
	iy[i]=iy[n]-1;
	ix[i]=ix[n];
	yMin=min(iy[i],yMin);
      }
      else if(d==2){
	ix[i]=ix[n]+1;
	iy[i]=iy[n];
	xMax=max(ix[i],xMax);
      }
      else{
	iy[i]=iy[n]+1;
	ix[i]=ix[n];
	yMax=max(iy[i],yMax);
      }
    }
    w=xMax-xMin+1;
    h=yMax-yMin+1;
    cout << w << ' ' << h << endl;
  }
  return 0;
}