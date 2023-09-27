#include<iostream>

using namespace std;

int max(int ,int );

int main(void){
  int min,x=0;
  int e;
  cin >> e;
 
  while(e!=0){
    min=e;
    for(int z=0;z*z*z<=e;z++){
      for(int y=0;y*y <= e - z*z*z ;y++){
	x = e - z*z*z - y*y;
	if(x+y+z<min) min = x+y+z;
      }
    }
      
    cout << min << endl;
    cin >> e;
  }
  return 0;
}

  