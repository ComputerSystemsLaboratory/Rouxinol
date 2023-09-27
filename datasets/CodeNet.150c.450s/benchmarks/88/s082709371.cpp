#include<iostream>
using namespace std;

int main(){
  int i,j,h,w,minh,minw;
  while(1){
    int result;
    int resultmin=100000000;
    
    cin >> h >> w;
    if(h==0 && w==0)break;

    int original = h*h+w*w;
    int original_minh = h;
    int flag = 0;

    for( i = 1;i < 150; i++ ){
      for( j = i+1; j <=150; j++ ){

	result = i*i+j*j;
      	if( result > original && result < resultmin ){
	    resultmin = result;
	    minh=i;
	    minw=j;
	} 
	if( result == original && i > original_minh ){
	  minh=i;
	  minw=j;
	  flag = 1;
	  break;
	}
	
      }
      if( flag == 1 ) break;
    }
    cout << minh << " " << minw << endl;
    
  }

  return 0;
}