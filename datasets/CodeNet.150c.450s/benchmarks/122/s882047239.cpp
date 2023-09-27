// input: alds1_9_c.in
#include<iostream>
#include<stdlib.h>
using namespace std;

#define NIL -100

void error(const std::string& msg) {
  cout << "error: " << msg << endl;
  exit(1);
}

class Heap {
public:
  Heap() {
    xs = new int[2000000];
    last = -1;
  }
  void insert(int k) {
    last++;
    xs[last] = k;

    int c = last;
    int p = parent(last);
    while(p != c && xs[p] < xs[c]) {
      swap(xs[p], xs[c]);

      p = parent(p);
      c = parent(c);
    }
  }
  int extractMax() {
    if(last < 0) error("heap underflow");
    int max = xs[0];

    swap(xs[0], xs[last]);
    xs[last] = NIL;
    maxHeapify(0);

    last--;
    return max;
  }

  void print() {
    cout << xs[0];
    for(int i=1; i<last+1; i++) {
      cout << ", " << xs[i];
    }
    cout << endl;
  }
private:
  void maxHeapify(int i) {
    int largest = i;
    int l = left(i);
    if(l != -1 && xs[l] > xs[largest]) largest = l;
    int r = right(i);
    if(r != -1 && xs[r] > xs[largest]) largest = r;

    if(largest != i) {
      swap(xs[largest], xs[i]);
      maxHeapify(largest);
    }
  }

  int left(int i) {
    int l = i*2;
    if(l > last) {
      return -1;
    }
    return l;
  }

  int right(int i) {
    int r = i*2+1;
    if(r > last) {
      return -1;
    }
    return r;
  }

  int parent(int i) {
    return i/2;
  }

  int* xs;
  int last;
};

int main() {
  Heap h;

  string order;
  int value;
  while(true) {
    cin >> order;
    if(order.compare("insert") == 0) {
      cin >> value;
      h.insert(value);
    } else if(order.compare("extract") == 0) {
      cout << h.extractMax() << endl;
    } else if(order.compare("end") == 0) {
      return 0;
    }
  }
}