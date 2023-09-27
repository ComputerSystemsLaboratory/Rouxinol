#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

static void print(const vector<int> &nums) {
  for (auto itr = nums.begin(); itr != nums.end(); itr++) {
    if (itr != nums.begin()) {
      cout << " ";
    }
    cout << *itr;
  }

  cout << endl;
}

static void insertion_sort(vector<int> &nums) {
  print(nums);

  for (size_t i = 1; i < nums.size(); i++) {
    int key = nums[i];
    size_t j = i;
    while (j > 0 && nums[j - 1] > key) {
      nums[j] = nums[j - 1];
      j--;
    }
    nums[j] = key;

    print(nums);
  }
}

int main(int argc, char *argv[]) {
  // Read input
  istream_iterator<int> eos;
  istream_iterator<int> iit(cin);

  vector<int> nums;
  if (iit != eos) {
    iit++;  // skip first line
  }

  for (; iit != eos; iit++) {
    nums.push_back(*iit);
  }

  insertion_sort(nums);

  return 0;
}