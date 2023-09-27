#include <iostream>
using namespace std;

int main(){

  int i, n, x, flag = 0;

  cin >> n;
 
  for(i = 3; i <= n; i++){
    x = i;
    if(x % 3 == 0){
      cout <<" "<< i;
      flag = 1;
    }
    while(x != 0 && flag == 0){
      if (x % 10 == 3){
	cout <<" "<< i;
	break;
      }
      x = x / 10;
    }
    flag = 0;
  }
  cout << endl;

  return 0;
}