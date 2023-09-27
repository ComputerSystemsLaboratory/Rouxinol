#include "stdio.h"
#include<iostream>

using namespace std;

int getParentNumber(int i){
  return int(i/2);
}

int getChildLeft(int i){
  return 2*i;
}

int getChildRight(int i){
  return 2*i+1;
}


int main(void){
  
  int N;
  scanf("%d", &N);
  
  int* data = new int [N+1];
  
  for(int i=1;i<N+1;i++){
    cin >> data[i];
  }
  
  for(int i=1;i<N+1;i++){
    printf("node %d: ", i);
    printf("key = %d, ", data[i]);
    
    if(1 <= getParentNumber(i)){
      printf("parent key = %d, ", data[getParentNumber(i)]);  
    }  

    if(getChildLeft(i) <= N){
      printf("left key = %d, ", data[getChildLeft(i)]);
    }

    if(getChildRight(i) <= N){
      printf("right key = %d, ", data[getChildRight(i)]); 
     }

    printf("\n");
  
  };

  delete [] data;

  return 0;
}

