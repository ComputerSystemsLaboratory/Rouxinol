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

using namespace std;
const int INF = 0x7fffffff;

int H;
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

void maxHeapify(vector<int>* a,int ii){
  int l,r;
  l = ii*2+1;
  r = ii*2+2;
  int largest;

  if(l < H && a->at(l) > a->at(ii)){
    largest = l;
  }
  else{
    largest = ii;
  }

  if(r < H && a->at(r) > a->at(largest)){
    largest = r;
  }

  if(largest != ii){
    int sw;
    sw = a->at(ii);
    a->at(ii) = a->at(largest);
    a->at(largest) = sw;
    maxHeapify(a,largest);
  }
}

void buildMaxHeap(vector<int>* a){
  int ii;
  for(ii=H-1;ii>=0;ii--){
    maxHeapify(a,ii);
  }
}

int main(){
  long ii,jj,kk;
  vector<int> a;
  int n;

  cin >> H;
  a.resize(H);

  for(ii=0;ii<H;ii++){
    cin >> a[ii];
  }

  buildMaxHeap(&a);

  for(ii=0;ii<H;ii++){
    cout << " " << a[ii];
  }
  cout << endl;
  
  return 0;
}

