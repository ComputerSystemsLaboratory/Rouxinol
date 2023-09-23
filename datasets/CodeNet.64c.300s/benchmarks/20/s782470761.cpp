#include <iostream>
using namespace std;
double f(int x);

int main(){
  int n;
  int sum;
  while(cin >> n){
    sum = 0;
    for (int i=0; i<600/n; i++){
      sum += f(i*n)*n;
    }
    cout << sum <<endl;
  } 
}

double f(int x){
  return x*x;
}