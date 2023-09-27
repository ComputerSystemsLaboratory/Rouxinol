#include <iostream>
using namespace std;

int h;

int parent(int i){return i / 2;}
int left(int i){return i * 2;}
int right(int i){return i * 2 + 1;}

void maxHeapify(int t[], int i){
  int large;
  int l = left(i);
  int r = right(i);
  if(l <= h && t[l] > t[i]) large = l;
  else large = i;
  if(r <= h && t[r] > t[large]) large = r;
  if(large != i){
    swap(t[i], t[large]);
    maxHeapify(t, large);
  }
}

void buildMaxHeap(int t[]){
  for(int i=h/2;i>=1;i--){
    maxHeapify(t, i);
  }
}

int main(){
  cin >> h;
  int tree[h+1];
  for(int i=1;i<h+1;i++){
    cin >> tree[i];
  }
  buildMaxHeap(tree);
  for(int i=1;i<=h;i++){
    cout << " " << tree[i];
  }
  cout << endl;
  return 0;
}

