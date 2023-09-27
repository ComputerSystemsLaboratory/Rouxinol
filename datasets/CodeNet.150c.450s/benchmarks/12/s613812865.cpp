#include<iostream>
#include<cstdio>
#define MAX 10000
#define MMIINN -2000000200
using namespace std;
typedef long long ll;

class Heap{
public:
  int index;
  ll HeapArray[MAX+1];

  Heap(){
    index=0;
    for(int i=0;i<=MAX;i++)HeapArray[i]=MMIINN;
  }

  void insert(ll v){
    index++;
    HeapArray[index]=v;
  }

  ll getValue(int i){
    return HeapArray[i];
  }

  ll getParent(int i){
    return HeapArray[i/2];
  }

  ll getLeft(int i){
    return HeapArray[2*i];
  }

  ll getRight(int i){
    return HeapArray[2*i+1];
  }



};


int main(){
  int n;
  ll val;
  Heap H;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> val;
    H.insert(val);
  }

  for(int i=1;i<=n;i++){
    printf("node %d: key = %lld, ",i,H.getValue(i));
    if(i != 1)printf("parent key = %lld, ",H.getParent(i));
    if(H.getLeft(i) != MMIINN)printf("left key = %lld, ",H.getLeft(i));
    if(H.getRight(i) != MMIINN)printf("right key = %lld, ",H.getRight(i));
    printf("\n");
  }



  return 0;
}