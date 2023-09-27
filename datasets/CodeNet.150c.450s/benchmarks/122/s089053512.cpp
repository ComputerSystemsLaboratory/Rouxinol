#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int NullIndex = -1;
vector<int> heap;

int get_parent_index(int index) {
  int parent_index = index / 2;

  if(parent_index < 1) {
    return NullIndex;
  }

  return parent_index;
}

int get_left_index(int index) {
  int heap_size = heap.size() - 1;
  int left_index = index * 2;

  if(left_index > heap_size) {
    return NullIndex;
  }

  return left_index;
}

int get_right_index(int index) {
  int heap_size = heap.size() - 1;
  int right_index = index * 2 + 1;

  if(right_index > heap_size) {
    return NullIndex;
  }

  return right_index;
}

void swap (int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

void max_heapify_bottom_up(int index) {
  int parent_index = get_parent_index(index);

  if(parent_index == NullIndex) {
    return;
  }

  if(heap[index] > heap[parent_index]) {
    swap(heap[index], heap[parent_index]);
    max_heapify_bottom_up(parent_index);
  }
}

void insert(int key) {
  heap.push_back(key);
  max_heapify_bottom_up(heap.size() - 1);
}

void max_heapify_top_down(int index) {
  int left_index = get_left_index(index);
  int right_index = get_right_index(index);

  if(left_index == NullIndex && right_index == NullIndex) {
    return;
  }

  int larger_child_idnex = left_index;
  if(right_index != NullIndex && heap[right_index] > heap[left_index]) {
    larger_child_idnex = right_index;
  }

  if(heap[larger_child_idnex] > heap[index]) {
    swap(heap[larger_child_idnex], heap[index]);
    max_heapify_top_down(larger_child_idnex);
  }
}

int extract() {
  int heap_size = heap.size() - 1;

  swap(heap[1], heap[heap_size]);
  int extracted = heap.back();
  heap.pop_back();

  max_heapify_top_down(1);

  return extracted;
}

int main() {
  string command;
  int key;
  heap.resize(1);


  while(true) {
    cin >> command;

    if (command == "end") {
      break;
    }

    if (command == "insert") {
      cin >> key;

      insert(key);
    } else if (command == "extract") {
      int extracted_key = extract();
      cout << extracted_key << endl;
    }
  }

}

