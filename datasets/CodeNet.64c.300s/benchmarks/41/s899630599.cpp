#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
//max heap size
#define N 500001

//array
int key[N];
//heap size
int n;
//function parent
int parent(int i){
  return i/2;
}
//function left
int leftc(int i){
  return 2*i;
}
//function right
int rightc(int i){
  return 2*i+1;
}

//function maxHeapify
void maxHeapify(int i){
  int l,r,largest;
  int st;
 
  l=leftc(i);
  r=rightc(i);

  if(l<=n && key[l]>key[i]) largest=l;
  else largest=i;
  
  if(r<=n && key[r]>key[largest]) largest=r;
  
  if(largest!=i){
    st=key[i];
    key[i]=key[largest];
    key[largest]=st;
    maxHeapify(largest);    
  }

}

//function build max heap
void buildMaxHeap(void){
  for(int i=(n/2);i>=1;i--) maxHeapify(i);
}

int main(){
  int data;
  int h;
 
  //load number
  scanf("%d",&n);
  //load data and set key
  for(int i=1;i<=n;i++){
    scanf("%d",&data);
    key[i]=data;
  }
 
  //execute maxheap
  buildMaxHeap();

  //print
  for(int i=1;i<=n;i++){
    printf(" %d",key[i]);
  }
  printf("\n");
  return 0;
}