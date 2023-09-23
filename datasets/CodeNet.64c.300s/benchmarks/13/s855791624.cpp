#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
#define MAX_N 44

class Fib{
private:
  int size;
  int *A;
public:
  Fib(int size){
    this->size = size;
    makeFib();
  }

  int getFib(int n){
    return A[n];
  }

  void makeFib(){
    int i;
    this->A = (int*)malloc(sizeof(int)*(this->size+1));
    this->A[0] = 1;
    this->A[1] = 1;
    for(i = 2;i <= this->size;i++){
      this->A[i] = this->A[i-2]+this->A[i-1];
    }
  }

  ~Fib(){
    free(A);
  }
};
 
int main(){
 
    int n;
    Fib *fib = new Fib(MAX_N); 

    cin >> n;
 
    cout << fib->getFib(n) << endl;
 
    delete fib;

    return 0;
}