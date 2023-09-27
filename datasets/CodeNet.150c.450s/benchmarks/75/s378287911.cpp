#include"stdio.h"
#include<iostream>

using namespace std;

int getLeftChild(int node_num){
  return 2*node_num;
}

int getRightChild(int node_num){
  return 2*node_num+1;
}

void swapHeap(int data[], int node1, int node2){
  int dummy;

  dummy       = data[node1];
  data[node1] = data[node2];
  data[node2] = dummy;
  
}


void maxHeapify(int data[], int N, int node_num){
  int node_left_child  = getLeftChild(node_num);
  int node_right_child = getRightChild(node_num);

  int largest;

  if(node_left_child <= N && data[node_left_child] > data[node_num]){
    largest = node_left_child;
  }else{
    largest = node_num;
  }

  if(node_right_child <= N && data[node_right_child] > data[largest]){
    largest = node_right_child;    
  }

  if(largest != node_num){
    swapHeap(data, node_num, largest);
    maxHeapify(data, N,  largest);
  }
}


void buildMaxHeap(int data[], int N){
  for(int i = int(N/2);i >= 1;i--){
    maxHeapify(data, N , i);
  }
}

void printHeap(int data[], int N){
  for(int i=1;i<=N;i++){
    printf(" %d", data[i]);
  }
  printf("\n");
}

int main(void){
 
  int N;
  scanf("%d", &N);

  int* data = new int [N+1];

  for(int i=1;i<=N;i++){
    cin >> data[i];
  }

  buildMaxHeap(data, N);
  printHeap(data,N);

  delete [] data;

  return 0;
}

