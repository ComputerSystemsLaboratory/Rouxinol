#include <iostream>
#include <vector>

using namespace std;

const int max_num = 10'000;

void couting_sort(vector<int>& sequence, vector<int>& sorted) {
  vector<int> less_or_equal_counts(max_num + 1, 0);

  // Count duplication
  for(int i = 0; i < sequence.size(); i++) {
    less_or_equal_counts[sequence[i]]++;
  }

  // Count less than or equal to myself
  for(int i = 1; i < less_or_equal_counts.size(); i++) {
    less_or_equal_counts[i] += less_or_equal_counts[i - 1];
  }

  // Set sorted
  for(int i = sequence.size() - 1; i >= 0; i--) {
    int less_or_equal_num = less_or_equal_counts[sequence[i]];
    sorted[less_or_equal_num - 1] = sequence[i];

    less_or_equal_counts[sequence[i]]--;
  }
}

int main() {
  int sequence_num;
  vector<int> sequence, sorted;

  cin >> sequence_num;
  sequence.resize(sequence_num);
  sorted.resize(sequence_num);

  for(int i = 0; i < sequence_num; i++) {
    cin >> sequence[i];
  }

  couting_sort(sequence, sorted);

  for(int i = 0; i < sequence_num; i++) {
    cout << sorted[i];

    if(i != sequence_num - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

