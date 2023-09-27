#include <iostream>
#include <stdio.h>
using namespace std;

int linearSearch(int A[],int n,int key);

int main(){
  int n,S[10000+1],q,key,C=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",&S[i]);
  scanf("%d",&q);
  int T[q];
  for(int i=0;i<q;i++){
    scanf("%d",&key);
    C += linearSearch(S,n,key);
  }
  printf("%d\n",C);
  return 0;
}

int linearSearch(int A[],int n,int key){
  int i=0;
  A[n] = key;
  while(A[i]!=key) i++;
  return i != n;
}