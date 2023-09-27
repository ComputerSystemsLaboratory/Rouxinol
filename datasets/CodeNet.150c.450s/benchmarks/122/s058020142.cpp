#include <algorithm>
#include<iostream>
#include<vector>
#include<deque>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string>
#include <sstream>
#include<bitset>

#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#define MAX 2000000

using namespace std;
const int INF = 0x7fffffff;

int gcd(int x,int y){
  int mi,ma;
  ma = max(x,y);
  mi = min(x,y);
  if(ma % mi == 0){
    return mi;
  }
  else{
    return gcd(mi,ma % mi);
  }
}
int H;
int heap[MAX+1];

void heapIncreaseKey(int ii,int key){

  if(key < heap[ii]){
    return ;
  }

  heap[ii] = key;
  
  int tmp;

  while(ii > 1 && heap[(ii)/2] < heap[ii]){

    tmp = heap[ii];
    heap[ii] = heap[(ii)/2];
    heap[(ii)/2] = tmp;
    ii = (ii)/2;

  }

}

void insert(int key){
  H++;
  heap[H] = -INF;
  heapIncreaseKey(H,key);
  //cout << H << endl;
  int ii;

}

void maxHeapify(int ii){

  int l,r;
  l = ii*2;
  r = ii*2+1;

  int largest;

  if(l <= H && heap[l] > heap[ii]){
    largest = l;
  }
  else{
    largest = ii;
  }

  if(r <= H && heap[r] > heap[largest]){
    largest = r;
  }
  
  if(largest != ii){
    int sw;
    sw = heap[ii];
    heap[ii] = heap[largest];
    heap[largest] = sw;
    maxHeapify(largest);
  }
  
}


int heapExtractMax(){

  if(H < 0){
    return 0;
  }

  int max;
  max = heap[1];
  heap[1] = heap[H];
  H--;
  maxHeapify(1);
  return max;

}


int main(){
  long ii,jj,kk;
  H = 0;
  string cmd;
  int n;

  while(true){
    cin >> cmd;
    if(cmd == "end"){
      break;
    }
    else if(cmd == "insert"){
      cin >> n;
      insert(n);
    }
    else{
      // extract;
      cout << heapExtractMax() << endl;
      //cout << "=================" << endl;
      //for(ii=1;ii<=H;ii++){
      //  cout << heap[ii] << endl;
      //}
      //cout << "=================" << endl;      
      //cout << "***" << heapExtractMax() << "***" << endl;
      //cout << "=================" << endl;
      //for(ii=1;ii<=H;ii++){
      //  cout << heap[ii] << endl;
      //}
      //cout << "=================" << endl;      
    }
  }

  //for(ii=0;ii<H;ii++){
  //  cout << heap[ii] << endl;
  //}

  //insert(7);
  //insert(2);
  //
  //insert(8);
  //
  //for(ii=0;ii<H;ii++){
  //  cout << heap[ii] << endl;
  //}
  //heapExtractMax();
  //
  //for(ii=0;ii<H;ii++){
  //  cout << heap[ii] << endl;
  //}  
  return 0;
}

