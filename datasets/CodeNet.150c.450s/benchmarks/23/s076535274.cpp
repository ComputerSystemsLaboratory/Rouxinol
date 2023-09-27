#include <iostream>
#include <vector>
using namespace std;

void make_fib(vector<int>& fib){
  for(int i=2; i<fib.size(); i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
}

int main(){
  vector<int> fib(50,1);
  make_fib(fib);
  int n; cin >> n;
  cout << fib[n] << "\n";
}