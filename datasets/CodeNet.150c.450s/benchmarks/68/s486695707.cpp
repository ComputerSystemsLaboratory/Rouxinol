#include <iostream>
#include<stdio.h>
using namespace std;
int main(void){
  int i, j, tmp; 
  int number[1000]; 
  int n=0; 
  while(1){
  int min=1000000;
  scanf("%d", &n);
  if(n==0) {
      break;
  }
  for (i=0; i<n; i++){ 
    scanf("%d", &number[i]);
    }
  for (i=0; i<n-1; i++) { 
    for (j=i+1; j<n; j++) { 
        if(number[i]>number[j]){
        tmp =  number[i]; 
        number[i] = number[j]; 
        number[j] = tmp; 
        } 
    }
  }
  for(i=0;i<(n-1);i++){
      if(number[i+1]-number[i]<min){
          min=number[i+1]-number[i];
      }
  }
  cout<<min<<endl;
 }
    return 0;
} 
    


