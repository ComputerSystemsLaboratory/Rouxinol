#include <iostream>
#include <utility>
using namespace std;

int main(void){

  int A[4],B[4],sumA=0,sumB=0;

  for(int i=0; i < 4; i++){
    cin >> A[i];
    sumA+= A[i];
  }

  for(int i=0; i < 4; i++){
    cin >> B[i];
    sumB+=B[i];
  }

  cout << max(sumA,sumB) << endl;

  return 0;
}