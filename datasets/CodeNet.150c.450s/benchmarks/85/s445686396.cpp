#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int minana(int a,int b){
  if(a<b){
    return a;
  }
  else if(a>b){
    return b;
  }
  else return a;
}


int main(){
  int n;
  cin>>n;
  int r[100];
  int m[101][101];
  int j;
  int q=0;
  //int c[n];
  for(int i=1;i<=n;i++){
    cin>>r[i-1]>>r[i];
  }
  for(int i=1;i<=n;i++){
    m[i][i]=0;
  }
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      j=i+l-1;
      m[i][j]=(1<<21);
      for(int k=i;k<j;k++){
	q=m[i][k]+m[k+1][j]+r[i-1]*r[k]*r[j];
	m[i][j]=minana(m[i][j],q);
      }
    }
  }
  
  cout<<m[1][n]<<endl;
  return 0;
}

