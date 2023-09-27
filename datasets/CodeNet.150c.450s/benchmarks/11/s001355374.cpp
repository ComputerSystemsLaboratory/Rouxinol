#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stack>

using namespace std;

int main(){
  bool S[13],H[13],C[13],D[13];
  int n,i,get;
  char ch;

  cin>>n;

  for(i=0;i<13;i++){
    S[i]=0;
    H[i]=0;
    C[i]=0;
    D[i]=0;
  }

  for(i=0;i<n;i++){
    cin>>ch>>get;
    switch(ch){
      case 'S':
      S[get-1]=1;
      break;

      case 'H':
      H[get-1]=1;
      break;

      case 'C':
      C[get-1]=1;
      break;

      case 'D':
      D[get-1]=1;
      break;
    }
  }

  for(i=0;i<13;i++){
    if(S[i]==0){
      cout<<"S "<<i+1<<endl;
    }
  }

  for(i=0;i<13;i++){
    if(H[i]==0){
      cout<<"H "<<i+1<<endl;
    }
  }
  for(i=0;i<13;i++){
    if(C[i]==0){
      cout<<"C "<<i+1<<endl;
    }
  }
  for(i=0;i<13;i++){
    if(D[i]==0){
      cout<<"D "<<i+1<<endl;
    }
  }

  return 0;
}