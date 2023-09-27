#include <iostream>
#include <limits>
#include <string>
using namespace std;

int h;
int const MAX = 2000000;

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

void heapIncreaseKey(int t[], int i, int key){
  if(key < t[i]) return;
  t[i] = key;
  while(t[parent(i)] < t[i] && i > 1){
    swap(t[parent(i)], t[i]);
    i = parent(i);
  }
}

void insert(int t[], int key){
  h++;
  t[h] = -numeric_limits<int>::infinity();
  heapIncreaseKey(t, h, key);
}

int extract(int t[]){
  int ans = t[1];
  t[1] = t[h];
  h--;
  maxHeapify(t, 1);
  return ans;
}

int main(){
  int tree[MAX + 1];
  string com;
  int k;
  while(1){
    cin >> com;
    if(com == "end") break;
    else if(com == "insert"){
      cin >> k;
      insert(tree, k);
    }
    else if(com == "extract"){
      cout << extract(tree) << endl;
    }
  }
  // for(int i=1;i<=h;i++){
  //   cout << " " << tree[i];
  // }
  // cout << endl;
  return 0;
}

