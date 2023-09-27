#include<bits/stdc++.h>
using namespace std;

int fun(int h,int w,int i,int j){
	int a,b;
	a = h*h + w*w;
	b = i*i + j*j;
	if(a>b) return 1;
	else if(a == b && h>i) return 1;

  return 0;
}
int main(){
  int h,w,a,b;
  while(1){
	int mh = 150,mw = 150; 
	cin >> h >> w;
	if(h==0 && w==0) break;

	for(int i=1; i<150; i++){
	  for(int j=i+1; j<= 150; j++){
		if(h == i && w == j){
		} else if(fun(i,j,h,w) == 1){
			if(fun(mh,mw,i,j) == 1){
			  mh = i;
			  mw = j;
		  	}
		}
	  }
	}
	cout << mh << " " << mw << endl;
  }
  return 0;
}
