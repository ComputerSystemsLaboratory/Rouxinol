#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
  int n;
  int i,j;
  int sum;
  int count = 0;
  while(cin >> n){
    count = 0;
    if(n == 0){
      break;
    }
    for(i = 1;i < n;i++){
      sum = 0;
      for(j = 0;j < n;j++){
        sum += i + j;
        if(sum == n){
          count += 1;
        }else if(sum > n){
          break;
        }
      }
    }
    cout << count << endl;
  }
}