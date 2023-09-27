#include <iostream>
#include <cstdio>
using namespace std;

int main() {

  while(1) {

    int h,w,tan;

    cin >> h >> w;

    if(h == 0 && w == 0) break;
    tan = h*h+w*w;
    int ai = 1,aj = 1;
    int tan2;
    bool f=0;
    
    for(int i=1;i<h+101;i++) {
      for(int j=1;j<w+101;j++){
	tan2 = i*i+j*j;
	if(tan2 > tan){
	  if(i==1){
	    aj=j;
	    break;
	  }
	  else if(ai*ai+aj*aj > tan2 && i<j){ 
	    ai=i;
	    aj=j;
	  }
	}
	else if(tan==tan2 && i>h && i<j){
	  ai=i;
	  aj=j;
	  f=1;
	  break;
	}
      }
      if(f==1) break;
    }
    cout << ai <<" "<< aj << endl;
  }
  return 0;
}