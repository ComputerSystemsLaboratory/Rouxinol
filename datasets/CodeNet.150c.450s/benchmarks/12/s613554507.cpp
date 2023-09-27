#include <iostream>
#include <vector>

using namespace std;

const int NULLNodeKey = 2000000001;
const int heap_offset = 1;

int get_left(vector<int> binary_heap, int index) {
  int left_child_index = 2 * index;

  if(left_child_index > binary_heap.size() - heap_offset) {
    return NULLNodeKey;
  }

  return binary_heap[left_child_index];
}

int get_right(vector<int> binary_heap, int index) {
  int right_child_index = 2 * index + 1;

  if(right_child_index > binary_heap.size() - heap_offset) {
    return NULLNodeKey;
  }

  return binary_heap[right_child_index];
}

int get_parent(vector<int> binary_heap, int index) {
  int parent_index = (index % 2 == 0 ? index : index - 1) / 2;

  if(parent_index < 1) {
    return NULLNodeKey;
  }

  return binary_heap[parent_index];
}

int main() {
  int heap_size;
  vector<int> binary_heap;

  cin >> heap_size;
  binary_heap.resize(heap_size + 1);

  for(int i = 1; i <= heap_size; i++ ) {
    cin >> binary_heap[i];
  }


  for(int i = 1; i <= heap_size; i++ ) {
    cout <<  "node " << i << ": ";
    cout << "key = " << binary_heap[i] << ", ";

    int parent = get_parent(binary_heap, i);
    if(parent != NULLNodeKey) {
      cout << "parent key = " << parent << ", ";
    }

    int left = get_left(binary_heap, i);
    if(left != NULLNodeKey) {
      cout << "left key = " << left << ", ";
    }

    int right = get_right(binary_heap, i);
    if(right != NULLNodeKey) {
      cout << "right key = " << right << ", ";
    }

    cout << endl;
  }
}

