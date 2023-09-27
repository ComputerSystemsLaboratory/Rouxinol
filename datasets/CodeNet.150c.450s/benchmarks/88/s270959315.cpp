#include <iostream>
using namespace std;


int main() {

  while(1) {
    int h,w;

    cin >> h >> w;

    if(h == 0 && w == 0) break;
    int flag = 0;
    int minsya = 1000000; 
    int minx,miny,fsya;
    int sya = h*h + w*w;

    for(int i=1; i<150;i++) {
      for(int j =i;j<150;j++) {
	
	fsya = i*i + j*j;
	if(fsya == sya && i>h && i < j && flag == 0) {
	  minsya = fsya;
	  minx = j;
	  miny = i;
	  flag =1;
	}
	else if(sya < fsya && minsya > fsya && i < j) {
	  minsya = fsya;
	  minx = j;
	  miny = i;

	}
      }
      
    }
      cout << miny <<" " << minx << endl;
    
    
  }
  
  return 0;
  
}