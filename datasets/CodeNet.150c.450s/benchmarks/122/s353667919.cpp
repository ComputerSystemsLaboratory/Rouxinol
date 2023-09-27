#include <bits/stdc++.h>
#define INF ((2e9)+1)
using namespace std;
int A[2000020],H;

void maxHeapify(int i){
  int l=i*2;
  int r=i*2+1;
  int largest;
  if(l<=H&&A[l]>A[i]) largest=l;
  else largest=i;
  
  if(r<=H&&A[r]>A[largest]) largest=r;
  
  if(largest!=i) {
    swap(A[i],A[largest]);
    maxHeapify(largest);
  }
}

void heapIncreaseKey(int i,int key){
  A[i]=key;
  while(i>1&&A[i/2]<A[i]){
    swap(A[i],A[i/2]);
    i/=2;
  }
}

void insert(int k){
  H++;
  A[H]=-INF;
  heapIncreaseKey(H,k);  
}

int extract(){
  int res=A[1];
  A[1]=A[H];
  H--;
  maxHeapify(1);
  return res;
}


int main(){
  while(1){
    int a;
    char str[10];
    scanf("%s",str);
    if(str[0]=='i')scanf("%d",&a),insert(a);
    else if(str[1]=='x')cout <<extract()<<endl;
    else break;
  }
  return 0;
}