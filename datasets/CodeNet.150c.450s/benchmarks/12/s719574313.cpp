#include <bits/stdc++.h>
using namespace std;

#define NIL -1
#define MAX 250

int heap[MAX];

int main(){

  int H;
  scanf("%d", &H);

  for(int i=0; i<H; i++){
    scanf("%d", &heap[i]);
  }

  for(int i=0; i<H; i++){
    printf("node %d: ", i+1);
    printf("key = %d, ", heap[i]);

    if((i+1)/2 > 0){
      printf("parent key = %d, ", heap[(i+1)/2 - 1]);
    }

    int c = (i+1)*2 - 1;
    if(c < H) printf("left key = %d, ", heap[c]);
    if(++c < H) printf("right key = %d, " , heap[c]);
    printf("\n");
  }

  return 0;
}

