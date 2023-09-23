#include <iostream>
using namespace std;
#define MAX 45

int F[MAX];

void Fibonacci(){
  F[0] = 1; F[1] = 1;
  for( int i = 2 ; i < MAX ; i++ ) F[i] = F[i-2] + F[i-1];
}

int main(void){
  Fibonacci();
  int i;

  cin >> i;
  cout << F[i] << endl;

  return 0;
}