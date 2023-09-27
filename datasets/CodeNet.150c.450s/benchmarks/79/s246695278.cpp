#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector> 
using namespace std;
int main(){
  int n, r, p, c;
  

  while(1){
    
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    int i;
    int a[n], temp[n];
    for(i = 1;i < n+1;i++){
      a[n-i] = i;
    }

    for(int j = 0;j < r;j++){
      cin >> p >> c;
      
      
      
      for(i = 0;i < c;i++){
        temp[i] = a[p-1+i];
        //cout << "temp[n-p-c+i] = " << temp[n-p-c+i] << "a[n-p-1+i] = " << a[n-p-1+i] << endl;
      }
      for(i = 0;i < p-1;i++){
        temp[c+i] = a[i];
      } 
      for(i = 0;i < n-p-c+1;i++){
        temp[c+p-1+i] = a[c+p-1+i];
      }
      for(i = 0;i < n;i++){
        a[i] = temp[i];
      }
      
    }
    
    cout << temp[0] << endl;

  }

  return 0;
}