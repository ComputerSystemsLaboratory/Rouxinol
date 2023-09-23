#include<iostream>

using namespace std;

int main(){
  int e;
  int minimum = 10000000, n= 0;
  while(1){
    minimum = 10000000;
    cin >> e;
    if(e == 0) break;
    for(int i = 0; i<101; i++){
      for(int j = 0; j<1001; j++){
	n = e - i*i*i -j * j;
	if(n+ i+ j < minimum && n>= 0) minimum = n+ i+ j;
      }
    }
    cout << minimum << endl;
  }
  return 0;
}
      