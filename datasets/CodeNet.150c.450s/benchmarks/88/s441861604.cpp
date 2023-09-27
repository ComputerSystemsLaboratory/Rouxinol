#include<iostream>

using namespace std;

int main() {
  int h, w, minH, minW;
  cin>>h>>w;
  while(h>0 && w>0) {
    int diag = h*h+w*w;
    int calDiag = 151*151+151*151;

    for(int i=1; i<=150; i++) {
      for(int j=i+1; j<=150; j++) {

	if(diag == i*i+j*j) { // 下限
	  if(i*i+j*j == calDiag && h<i && i<minH) {
	    minH = i;
	    minW = j;
	  } 
	  else if(i*i+j*j<calDiag && h!=i && w!=j && h<i) { 
	    calDiag = diag;
	    minH = i;
	    minW = j;
	  }
	}
	else if(diag < i*i+j*j && (i*i+j*j<calDiag || (i*i+j*j==calDiag && i<minH))) { // 挟まれた場合 問題無し
	  calDiag = i*i+j*j;
	  minH = i;
	  minW = j;
	}

      }
    }
    cout<<minH<<" "<<minW<<endl;
    cin>>h>>w;
  }
  return 0;
}