#include<iostream>
using namespace std;

int main(){
  int n, x, count = 0;
  int i, j, k;
  
  while(1){
    cin >> n >> x;
     if(n == 0 && x == 0) break;
    for(i = 3; i <= n; i++){
      for(j = 2; j < i; j++){
        for(k = 1; k < j; k++){
          if(i + j + k == x) count++;
        }
      }
    }
    cout << count << endl;
    count = 0;
  }

  return 0;
}

