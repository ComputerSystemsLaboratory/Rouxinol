#include <iostream>
#include <string>
#include <vector>

using namespace std;

int selectionSort(vector<int> &A) {
  int swapcount = 0;

  for (size_t i = 0; i < A.size() - 1; i++) {
    size_t minj = i;
    for (size_t j = i + 1; j < A.size(); j++) {
      if (A[j] < A[minj]) {
        minj = j;
      }
    }
    if (minj != i) {
      // cout << "swap " << nums[i] << " and " << nums[minj] << endl;
      int tmp = A[minj];
      A[minj] = A[i];
      A[i] = tmp;
      swapcount++;
    }
  }

  return swapcount;
}

void printVector(vector<int> v) {
  for (size_t i = 0; i < v.size(); i++) {
    if (i > 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

int main(int argc, char **argv) {
  vector<int> nums;

  size_t N;
  cin >> N;

  for (size_t i = 0; i < N; i++) {
    int ti;
    cin >> ti;
    nums.push_back(ti);
  }
  // printVector(nums);

  int swapcount = selectionSort(nums);

  printVector(nums);
  cout << swapcount << endl;

  return 0;
}

