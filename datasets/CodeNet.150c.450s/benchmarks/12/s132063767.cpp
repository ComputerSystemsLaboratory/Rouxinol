#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
#define N 600
#define NIL -2100000000
int key[N];

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

  scanf("%d",&n);
  for(int i=0;i<N;i++) key[i]=NIL;
  for(int i=1;i<=n;i++){
    scanf("%d",&data);
    key[i]=data;
  }
 
  for(int i=1;i<=n;i++){
    printf("node %d: key = %d, ",i,key[i]);
    if(key[parent(i)]!=NIL) printf("parent key = %d, ",key[parent(i)]);
    if(key[leftc(i)]!=NIL) printf("left key = %d, ",key[leftc(i)]);
    if(key[rightc(i)]!=NIL) printf("right key = %d, ",key[rightc(i)]);
    printf("\n");
  }
  return 0;
}