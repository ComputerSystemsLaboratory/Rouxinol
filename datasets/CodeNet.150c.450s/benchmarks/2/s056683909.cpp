#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int partition(vector<int>& sequence, int first_index, int last_index) {
  int pivot = sequence[last_index];

  int partition_tail = first_index;
  for(int i = first_index; i < last_index; i++) {
    if(sequence[i] <= pivot) {
      swap(sequence[i], sequence[partition_tail]);
      partition_tail++;
    }
  }

  swap(sequence[last_index], sequence[partition_tail]);

  return partition_tail;
}

int main() {
  int sequence_num;
  vector<int> sequence;

  cin >> sequence_num;
  sequence.resize(sequence_num);

  for(int i = 0; i < sequence_num; i++) {
    cin >> sequence[i];
  }

  int pivot_index = partition(sequence, 0, sequence_num - 1);

  for(int i = 0; i < sequence_num; i++) {
    if(i == pivot_index) {
      cout << '[';
    }
    cout << sequence[i];
    if(i == pivot_index) {
      cout << ']';
    }

    if(i != sequence_num - 1) {
      cout << ' ';
    }
  }
  cout << endl;
}

