#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

int main(){
  int n,i,j;
  while(cin >> n) {
    if(n==1){
      cout << 0 <<endl;
      continue;
    }
    int k = 0, a[n];
    a[0] = 2;
  
    for (i = 3; i <= n; i = i + 2) {
      for (j = 0; j <= k; j++) {
        if(i % a[j] == 0 ) break;
        if(i <= a[j] * a[j]) {
          k++;
          a[k] =i;
          break;
        }
        
      }
      if(j == k + 1) {
        k++;
        a[k] = i;
      }
    }
    cout << k+1 << endl;
  }
  
  return 0;
}