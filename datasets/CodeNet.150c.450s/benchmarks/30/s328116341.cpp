#include <iostream>
#include <vector>

using namespace std;

size_t selection_sort(vector<int> &nums) {
  size_t swapNum = 0;

  for (size_t i = 0; i < nums.size(); i++) {
    size_t mini = i;
    for (size_t j = i; j < nums.size(); j++) {
      if (nums[j] < nums[mini]) {
        mini = j;
      }
    }

    if (i != mini) {
      swap(nums[i], nums[mini]);
      swapNum++;
    }
  }

  return swapNum;
}

void print(const vector<int> &nums) {
  for (auto itr = nums.begin(); itr != nums.end(); itr++) {
    if (itr != nums.begin()) {
      cout << " ";
    }
    cout << *itr;
  }

  cout << endl;
}

int main(int argc, char *argv[]) {
  // read input
  int n;

  cin >> n;

  vector<int> nums;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums.push_back(a);
  }

  size_t swapNum = selection_sort(nums);

  print(nums);
  cout << swapNum << endl;

  return 0;
}