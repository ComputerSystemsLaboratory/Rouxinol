#include <iostream>
using namespace std;

int main(){
  int flag = 1;
  int n,x;
  cin >> n;
  if(n==0) return 0;
  while(flag){
    int max = -1;
    int min = 1001;
    int sum = 0;
    for(int i=0;i<n;i++){
      cin >> x;
      if(x >= max){
        //sum += max;
        max = x;
      }//else sum += x;
      if(x <= min){
        //sum += min;
        min = x;
      }/*else*/ sum += x;
    }
//    sum -= 1000;
    sum = sum - min - max;
    sum = sum / (n - 2);
    cout << sum << endl;
    cin >> n;
    if(n == 0) flag = 0;
  }
  return 0;
}