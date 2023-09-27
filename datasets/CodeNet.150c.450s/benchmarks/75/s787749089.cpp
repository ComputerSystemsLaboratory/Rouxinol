#include <iostream>
#include <vector>

using namespace std;

const int NullIndex = -1;
vector<int> heap;
int heap_size;

int get_left_index(int index) {
  int last_index = heap_size;
  int left_index = index * 2;

  if (left_index > last_index) {
    return NullIndex;
  }

  return left_index;
}

int get_right_index(int index) {
  int last_index = heap_size;
  int right_index = index * 2 + 1;

  if (right_index > last_index) {
    return NullIndex;
  }

  return right_index;
}

void max_heapify(int current_index) {
  int large_child_index;

  int left_index = get_left_index(current_index);
  int right_index = get_right_index(current_index);

  // ヒープのサイズが1ののとき
  if (left_index == NullIndex && right_index == NullIndex) {
    return;
  }

  large_child_index = left_index;
  if (right_index != NullIndex && heap[right_index] >= heap[left_index]) {
    large_child_index = right_index;
  }

  if (heap[current_index] < heap[large_child_index]) {
    int tmp = heap[current_index];
    heap[current_index] = heap[large_child_index];
    heap[large_child_index] = tmp;

    max_heapify(large_child_index);
  }
}

void build_max_heap() {
  int last_paranet_index = heap_size % 2 == 0 ? heap_size / 2 : (heap_size - 1) / 2;

  for(int i = last_paranet_index; i >= 1; i--) {
    max_heapify(i);
  }

}

int main() {

  cin >> heap_size;
  heap.resize(heap_size + 1);

  for(int i = 1; i <= heap_size; i++) {
    cin >> heap[i];
  }

  build_max_heap();

  for(int i = 1; i <= heap_size; i++) {
    cout << " " << heap[i];
  }
  cout << endl;
}

