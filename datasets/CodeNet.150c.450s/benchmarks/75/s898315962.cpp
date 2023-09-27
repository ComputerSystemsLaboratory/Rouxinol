#include <iostream>
#include <vector>


class Heap {
private:
  std::vector<int> heap = {0};
  int left(int i);
  int right(int i);
public:
  void push_back(int v);
  int size();
  void maxHeapify(int i);
  void buildMaxHeap();
  std::vector<int> eval();
};

void Heap::push_back(int v) {
  heap.push_back(v);
}

int Heap::size() {
  return heap.size();
}

int Heap::left(int i) {
  return i*2;
}

int Heap::right(int i) {
  return i*2 + 1;
}

void Heap::maxHeapify(int i) {
  int l = left(i);
  int r = right(i);

  int largest = 0;
  if (l <= (int)heap.size() && heap[l] > heap[i])
    largest = l;
  else
    largest = i;
  if (r <= (int)heap.size() && heap[r] > heap[largest])
    largest = r;

  if (largest != i) {
    std::swap(heap[i], heap[largest]);
    maxHeapify(largest);
  }
}

void Heap::buildMaxHeap() {
  for (int i = (int)heap.size() / 2; i > 0; --i)
    maxHeapify(i);
}

std::vector<int> Heap::eval() {
  return std::vector<int>(heap.begin()+1, heap.end());
}


int main() {
  int h;
  std::cin >> h;
  Heap heap;
  for (int i = 0; i < h; ++i) {
    int v;
    std::cin >> v;
    heap.push_back(v);
  }
  heap.buildMaxHeap();
  for (int v: heap.eval())
    std::cout << " " << v;
  std::cout << std::endl;
}