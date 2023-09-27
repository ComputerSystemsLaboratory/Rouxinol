#include <bits/stdc++.h>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)
void insert(int);
void heapIncreaseKey(int,int);
int extract();
void maxHeapify(int);

int B,A[MAX+1];

int main(){
  int key;
  string com;
  while(1){
    cin >> com;
    if(com[0] == 'e' && com[1] == 'n'){
      break;
    }
    if(com[0] == 'i'){
      cin >> key;
      insert(key);
    }
    else{
      cout << extract() << endl;
    }
  }
  return 0;
}//end of main func


void insert(int key){
  B++;
  A[B] = -INFTY;
  heapIncreaseKey(B,key);
}

void heapIncreaseKey(int i,int key){
  int tmp;
  if(key < A[i]){
    return;
  }
  A[i] = key;
  while(i>1 && A[i/2] < A[i]){
   //tmp = A[i];
   //A[i] = A[i/2];
   //A[i/2] = tmp;
    swap(A[i],A[i/2]);
    i = i / 2;
  }
}//end of insert func


int extract(){
  int maxV;
  if(B < 1){
    return -INFTY;
  }
  maxV = A[1];
  A[1] = A[B--];
  maxHeapify(1);
  return maxV;
}//end of


void maxHeapify(int i){
  int right,left,largest;
  left = 2*i;
  right = (2*i)+1;
  if(left <= B && A[left] > A[i]){
    largest = left;
  }
  else{
    largest = i;
  }
  if(right <= B && A[right] > A[largest]){
    largest = right;
  }
  if(largest != i){
    swap(A[i],A[largest]);
    maxHeapify(largest);
  }
}