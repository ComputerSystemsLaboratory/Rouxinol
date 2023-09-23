#include<iostream>
#include<cstdio>
#define MAX 500005
#define MMIINN -2000000200
using namespace std;

typedef long long ll;

class maxHeap{
 public:
  int index;
  ll maxHeapArray[MAX];

  maxHeap(){
    index = 0;
    for(int i=0;i<MAX;i++)maxHeapArray[i]=MMIINN;
  }

  void Insert(ll v){
    ++index;
    maxHeapArray[index]=v;
    maxHeapify(index);
  }

  ll getLeft(int i){
    //return maxHeapArray[2*i];
    return 2*i;
  }

  ll getRight(int i){
    //return maxHeapArray[2*i+1];
    return 2*i+1;
  }

  ll getValue(int i){
    return maxHeapArray[i];
  }

  void buildMaxHeap(){
    for(int i=index/2;i>=1;i--){
      maxHeapify(i);
    }
  }


 private:

  void maxHeapify(int i){
    ll l = getLeft(i);
    ll r = getRight(i);
   ll largest;
    if(l <= index && maxHeapArray[l] > maxHeapArray[i])largest=l;
    else largest=i;
    if(r<=index && maxHeapArray[r] > maxHeapArray[largest])largest = r;
    if(largest != i){
      ll h;
      h = maxHeapArray[i];
      maxHeapArray[i] = maxHeapArray[largest];
      maxHeapArray[largest] = h;
      maxHeapify(largest);
    } 
  }




};

int main(){
  int n;
  ll val;
  maxHeap MH = maxHeap();
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%lld",&val); MH.Insert(val);
  }
    MH.buildMaxHeap();
  for(int i=1;i<=n;i++){
    printf(" %lld",MH.getValue(i));
  }
  printf("\n");

  return 0;
}