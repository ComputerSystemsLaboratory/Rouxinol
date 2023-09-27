#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
//max heap size
#define N 2000001

int heap_size=0;
int key[N];

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

  if(l<=heap_size && key[l]>key[i]) largest=l;
  else largest=i;
 
  if(r<=heap_size && key[r]>key[largest]) largest=r;
 
  if(largest!=i){
    st=key[i];
    key[i]=key[largest];
    key[largest]=st;
    maxHeapify(largest); 
  }
}

//function heap increase key
int heapIncreaseKey(int i,int data){
  int st;
  if(data<key[i]) return -1;
  key[i]=data;
  while(i>1 && key[parent(i)]<key[i]){
    st=key[i];
    key[i]=key[parent(i)];
    key[parent(i)]=st;
    i=parent(i);
  }
  return 0;
}

//function max heap insert
void maxHeapInsert(int data){
  heap_size++;
  key[heap_size]=-2147483648;
  heapIncreaseKey(heap_size,data);
}

//function extract
int heapExtractMax(void){
  int max;

  if(heap_size <1) return -1;
  max=key[1];
  key[1]=key[heap_size];
  heap_size--;
  maxHeapify(1);
  return max;
}

int main(){

  int data;
  char str[10];
  int st;

  while(1){
    //load string
    scanf("%s",str);
    //insert
    if(str[0]=='i'){
      scanf("%d",&data);
      maxHeapInsert(data);
    }
    //extract
    else if(strcmp("extract",str)==0){
      st=heapExtractMax();
      if(st!=-1) printf("%d\n",st);
    } 
    //end
    else break;
  }

  return 0;
}