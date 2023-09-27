#include<iostream>
using namespace std;
int main(){

  int h,w;
  
  while(1){

    cin >>h>>w;
    if(h==0 && w==0)break;

    int len=h*h+w*w;

    int min_h=151,min_w=151;
    
    for(int i=1 ; i <=150 ; i++){
      for(int j=1 ; j < i ; j++){
	if((i*i+j*j > len) || (i*i+j*j == len && j > h)){
	  if((i*i+j*j < min_h*min_h+min_w*min_w) ||(i*i+j*j == min_h*min_h+min_w*min_w && j < min_h)){
	    min_h=j;
	    min_w=i;
	  }
	}
      }
    }
    
    cout <<min_h<<" "<<min_w<<endl;
      
  }
  
  return 0;
}