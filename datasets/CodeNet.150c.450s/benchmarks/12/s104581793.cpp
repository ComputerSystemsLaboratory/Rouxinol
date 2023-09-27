#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

#define N 251

int parent(int i){
  return i/2;
}

int leftc(int i){
  return 2*i;
}

int rightc(int i){
  return 2*i+1;
}

int main(){
  int n,data;
  int h;
  //array
  int key[N];
  //load number
  scanf("%d",&n);
  //load data and set key
  for(int i=1;i<=n;i++){
    scanf("%d",&data);
    key[i]=data;
  }
 
  //print
  for(int i=1;i<=n;i++){
    printf("node %d: key = %d, ",i,key[i]);
    h=parent(i);
    if(h>0 && h<=n) printf("parent key = %d, ",key[h]);
    h=leftc(i);
    if(h>0 && h<=n) printf("left key = %d, ",key[h]);
    h=rightc(i);
    if(h>0 && h<=n) printf("right key = %d, ",key[h]);
    printf("\n");
  }
  return 0;
}