#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
  int i,j,k;
  int n1=0,n2=0;
  int v[5];
  int temp;

  for(i=0;i<5;i++){
    cin>>v[i];
  }
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      if(v[j+1] > v[j]){
      temp = v[j];
      v[j] = v[j+1];
      v[j+1] = temp;
      }

  for(i=0;i<4;i++){
    printf("%d ",v[i]);
	   }
      cout<<v[4]<<endl;

    return 0;
  }