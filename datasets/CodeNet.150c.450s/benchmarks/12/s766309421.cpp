#include <iostream>
#include <cstdio>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
int parent(int i) {return i/2;};
int left(int i) {return 2*i;};
int right(int i) {return 2*i+1;};
int main(){
  int H,A[250];
  scanf("%d",&H);
  REP(i,H) scanf("%d",&A[i]);
  REP(i,H){
    printf("node %d: key = %d, ",i+1,A[i]);
    if(parent(i+1)>=1) {
      printf("parent key = %d, ",A[parent(i+1)-1]);
    }
    if(left(i+1)<=H) {
      printf("left key = %d, ",A[left(i+1)-1]);
    }
    if(right(i+1)<=H) {
      printf("right key = %d, ",A[right(i+1)-1]);
    }
    printf("\n");
  }
  return 0;
}