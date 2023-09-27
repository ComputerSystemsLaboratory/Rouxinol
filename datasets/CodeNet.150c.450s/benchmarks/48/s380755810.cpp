#include<iostream>
using namespace std;

int main(void){
  int e;
  while(cin >> e && e >0){
    int sum;
    int minsum=0;
    for(int z=0;z*z*z<=e;z++){
      int temp=e-z*z*z;
      for(int y=0;y*y<=temp;y++){
	int x=temp-y*y;
	sum=x+y+z;
	
	if(minsum==0 || sum < minsum){
	  
	  minsum=sum;
	}
      }
    }
    cout<<minsum<<endl;
  }
  return 0;
}
	  