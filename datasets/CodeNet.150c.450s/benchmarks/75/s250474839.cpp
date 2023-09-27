#include <iostream>
using namespace std;
#define MAX_H 500000

int h;
int node[MAX_H + 1];

void maxHeapify(int i){
  int l = i * 2, r = i * 2 + 1;
  int largest;
  if(l <= h && node[l] > node[i]) largest = l;
  else largest = i;
  if(r <= h && node[r] > node[largest]) largest = r;

  if(largest != i){
    swap(node[largest], node[i]);
    maxHeapify(largest);
  }
}

void buildMaxHeap(){
  for(int i = h / 2; i >= 1; i--){
    maxHeapify(i);
  }
}

int main(void){
  cin >> h;
  for(int i = 1; i <= h; i++) cin >> node[i];
  buildMaxHeap();
  for(int i = 1; i <= h; i++){
    cout << " " << node[i];
  }
  cout << endl;
  return 0;
}