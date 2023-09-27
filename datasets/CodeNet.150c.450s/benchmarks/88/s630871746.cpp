#include<iostream>
#define l(a,b) a*a+b*b
#define INF 150
using namespace std;
int main(){
  int h,w,mh,mw;
  while(cin >> h >> w && h|w){
    mh=mw=INF;
    for(int i=INF;i>0;i--){
      for(int j=INF;j>i;j--){
	if((l(i,j)>l(h,w)) || (l(i,j)==l(h,w)&&i>h)){
	  if(l(i,j)<l(mh,mw) || (l(i,j)==l(mh,mw)&&i<mh)){
	    mh=i,mw=j;
	  }
	}
      }
    }
    cout << mh << " " << mw << endl;
  }
}