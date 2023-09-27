#include <iostream>
#include <string>

using namespace std;

int heap[2000000] = {0};
int size = 0;

int parent(int i) {
  if(i % 2 == 1){
    return (i - 1) / 2;
  } else {
    return (i - 2) / 2;
  }
}

int left_child(int i){
  return (i * 2) + 1;
}

int right_child(int i){
  return (i * 2) + 2;
}

void push(int x){
  int i = size++;

  while(i > 0){
    int p = parent(i);
    if(heap[p] >= x) break;
    else {
      heap[i] = heap[p];
      i = p;
    }
  }

  heap[i] = x;
}

int pop(){
  int ret = heap[0];
  int x = heap[--size];

  int i = 0;
  while(left_child(i) < size){
    int l = left_child(i), r = right_child(i);
    if(r < size && heap[r] > heap[l]) l = r;
    if(heap[l] <= x) break;
    heap[i] = heap[l];
    i = l;
  }

  heap[i] = x;
  return ret;
}
int main(){
  int k;
  string meirei;

  while(1){
    cin >> meirei;
    if(meirei == "insert"){
      cin >> k;
      push(k);
    } else if (meirei == "extract"){
      cout << pop() << endl;
    } else {
      break;
    }
  }

  return 0;
}