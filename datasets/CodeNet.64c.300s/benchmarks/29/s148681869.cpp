#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {

  int e,x,y,z;

  for(;;){
    cin >> e;
    if(!e)break;
    int xm = e+1;
    int ym = (int)sqrt(e)+1;
    int zm = (int)cbrt(e)+1;

    int f,g2,g3,m=3*e;
    for(int i=zm;0<=i;--i){
      for(int j=0;j<=ym;++j){
	if(i*i*i+j*j<=e){
	  int k=e-i*i*i-j*j;
	  f=i+j+k;
	  if(f<m)m=f;
	}
      }
    }
    
    cout << m << endl;
  }
  
}