#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
  int n,k;
 
  while(cin >> n >> k ,n | k){
    int sum = 0;
    int array[n];
 
    for(int i = 0 ; i < n ; i++){
      cin >> array[i];
    }
    for(int i = 0 ; i < k ; i++){
      sum += array[i];
    }
 
    int res = sum;
    for(int i = k ; i < n ; i++){
      sum += array[i];
      sum -= array[i-k];
      res = max(res,sum);
    }
    cout << res << endl;
  }
 
  return 0;
}