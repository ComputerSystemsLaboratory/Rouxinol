#include<iostream>
#define k 10001
#define number 2000000
using namespace std;

void countingsort();

int n,A[number],B[number],C[k];

int main(){
  
  cin >>n;
  for(int i=0 ; i < n ; i++)cin >>A[i];

  countingsort();

  for(int i=0 ; i < n ; i++){
    if(i == n-1){
      cout <<B[i]<<endl;
    }else{
      cout <<B[i]<<" ";
    }
  }
  
  return 0;
}

void countingsort(){
  
  for(int i=0 ; i < k ; i++)C[i]=0;
  
  for(int i=0 ; i < n ; i++)C[A[i]]++;
  
  for(int i=1 ; i < k ; i++)C[i]=C[i]+C[i-1];
  
  for(int i=n-1 ; i >= 0 ; i--){
    B[C[A[i]]-1]=A[i];
    C[A[i]]--;
  }
  
}