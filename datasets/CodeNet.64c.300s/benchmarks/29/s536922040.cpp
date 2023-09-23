#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void){
  while(1){
    int e,m = 1111111;
    cin >> e; if(!e) break;
    for(int i = 0; i*i*i <= e; i++){
      int ee = e - i*i*i;
      for(int j = 0; j*j <= ee; j++){
	m = min(m,i+j+ee-j*j);
      }
    }
    cout << m << endl;
  }
}