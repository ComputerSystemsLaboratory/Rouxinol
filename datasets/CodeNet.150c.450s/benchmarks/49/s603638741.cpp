#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main(){
  int n;
  int k;
  int sum=0;
  int max;
  int min;
  while(cin >> n){
    sum = 0;
    if(n == 0){
      break;
    }
    for(int i = 0;i < n;i++){
      cin >> k;
      if(i==0){
        min = k;
        max = k;
      }else if(min > k){
        min = k;
      }else if(max < k){
        max = k;
      }
      sum += k;
    }
    sum = (sum - min - max)/(n-2);
    cout << sum << endl;
  }
}