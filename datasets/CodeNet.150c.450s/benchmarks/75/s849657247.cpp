#include <bits/stdc++.h>
using namespace std;

vector<long long> h;

long long parent(int n){
  return n/2;
}

long long left(int n){
  return n*2;
}
long long right(int n){
  return n*2+1;
}

void maxHeapify(int x){
  int l = left(x), r = right(x);

  int largest = x;
  if(l < h.size() && h[l] > h[largest]) largest = l;
  if(r < h.size() && h[r] > h[largest]) largest = r;

  swap(h[x], h[largest]);

  if(largest != x) maxHeapify(largest);
}

void buildMaxHeap(){
  for(int i=h.size()/2; i>0; --i){
    maxHeapify(i);
  }
}

int main() {
  int n; cin >> n;

  h.resize(n+1);
  for(int i=1; i<=n; ++i) cin >> h[i];

  buildMaxHeap();

  for(int i=1; i<h.size(); ++i){
    cout << " " << h[i];
  }cout << endl;
}

