#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 250

// 1 originとして使う
int heap[MAX+1];

int parent(int i) { return i/2;}
int left(int i) {return 2*i;}
int right(int i){return 2*i + 1;}

int main(){

  int H;
  scanf("%d", &H);

  for(int i=1; i<=H; i++){
    scanf("%d", &heap[i]);
  }

  for(int i=1; i<=H; i++){
    printf("node %d: ", i);
    printf("key = %d, ", heap[i]);

    if(parent(i) > 0){
      printf("parent key = %d, ", heap[parent(i)]);
    }

    if(left(i) <= H) printf("left key = %d, ", heap[left(i)]);
    if(right(i) <= H) printf("right key = %d, " , heap[right(i)]);
    printf("\n");
  }

  return 0;
}

