#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int parent(int);
int left(int);
int right(int);

//int B;

int main(){
  int i,B;
  int A[MAX+1];
  cin >> B;
  for(i = 1; i <= B; i++){
    cin >> A[i];
  }
  for(i = 1; i <= B; i++){
    printf("node %d: key = %d, ",i,A[i]);
    if(1 <= parent(i)){
      printf("parent key = %d, ",A[parent(i)]);
    }
    if(left(i) <= B){
      printf("left key = %d, ",A[left(i)]);
    }
    if(right(i) <= B){
      printf("right key = %d, ",A[right(i)]);
    }
    printf("\n");
  }
  return 0;
}

int parent(int i){
  return (i/2);
}
int left(int i){
  return 2*i;
}
int right(int i){
  return (2*i)+1;
}