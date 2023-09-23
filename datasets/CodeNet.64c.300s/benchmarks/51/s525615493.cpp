#include <iostream>
using namespace std;

int main(){
  long long int n, i;

  cin >> n;

  if(n <= -2){

  }else if(n == 0){
    cout << "1" << endl;
  }else if(n >= 1){
    for(i = n - 1;i >= 1;i--){
      n = n * i;
    }
    cout << n << endl;
  }


  return 0;
}