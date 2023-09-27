#include <iostream>
#include <cmath>
#include <vector>

#define MAX_N 44

using namespace std;

int fibonacci[MAX_N];

int fibo(int n){
  if(fibonacci[n]>0){
    return fibonacci[n];
  }else{
    if(n==0 || n==1){
      fibonacci[n]=1;
      return fibonacci[n];
    }else{
      fibonacci[n]=fibo(n-1)+fibo(n-2);
      return fibonacci[n];
    }
  }
}

  


int main(){
  for(int i=0;i<MAX_N;i++){
    fibonacci[i] = 0;
  }


  int n;
  cin >> n;
  cout << fibo(n) << endl;
  
}