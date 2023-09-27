#include <iostream>
#include <vector>
using namespace std;


void fibonacci(int n){
  vector<int> fib;

  fib.push_back(1);
  fib.push_back(1);

  if(n < 2){
    cout << "1" << endl;
  }else if(n == 2){
    fib.push_back(fib.at(0) + fib.at(1));
    cout << fib.back() << endl;
  }else{
    for(int i = 2;i < n+1;i++){
      fib.push_back(fib.at(i - 2) + fib.at(i - 1));
    }
      cout << fib.back() << endl;
  }

}

int main(){
  int n;
  cin >> n;
  fibonacci(n);

  return 0;
}

