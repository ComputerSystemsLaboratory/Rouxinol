#include<iostream>

using namespace std;

int main(){
  while(1){
    int in, sum, min;
    cin >> in;
    min = in;
    if(in == 0) break;

    int pre;

    for(int z = 0; z*z*z <= in; z++){
      sum = in - z*z*z;
      for(int y = 0; y*y <= in-z*z*z; y++){
	sum = in - z*z*z - y*y;
	pre = z+y+sum;
	if(min > pre) min = pre;
      }
    }

    cout << min << endl;
  }
  return 0;
}