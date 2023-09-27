#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 int n, i, j, k;
 int b;
 int count = 0;
 
 

 while(cin >> n){
  int a[n+1];
  for(i = 2;i < n+1;i++){
    a[i] = i;
  }


  for(i = 2;i*i < n+1;i++){
    if(a[i] != 0){
      b = a[i];
     }
    for(j = 2;j*b < n+1;j++){
      a[j*b] = 0;
    }
  }
  for(i = 2;i < n+1;i++){
    if(a[i] != 0){
      count++; 
    }
  }
  cout << count << endl;
  count = 0;
  
  
 }

 return 0; 
}