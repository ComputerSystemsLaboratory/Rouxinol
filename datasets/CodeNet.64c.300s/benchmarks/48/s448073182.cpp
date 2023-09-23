#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
#define MAX_NUM 1000010


void do_calc(int *numPrime){
  for(int i=2;i<=MAX_NUM;i++){
    bool flag = false;

    for(int j=2;j<=sqrt(i);j++){
      if(i%j==0){
	flag = true;
	break;
      }
    }
      
    if(flag){
      numPrime[i] = numPrime[i-1];
      continue;
    }else{
      numPrime[i] = numPrime[i-1] + 1;
    }
  }
}
  


int main(){
  int n;
  int numPrime[MAX_NUM];

  do_calc(numPrime);
  while(cin >> n){
    cout << numPrime[n] << endl;
  }
}