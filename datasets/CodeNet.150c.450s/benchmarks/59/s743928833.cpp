#include <iostream>
#include <vector>

std::vector<int> BuildArrFromInput() {
  int length;
  std::cin >> length;
  std::vector<int> nums;
  for (int i = 0; i < length; ++i) {
    int n;
    std::cin >> n;
    nums.push_back(n);
  }
  return nums;
}

void ExecStep(std::vector<int>& nums, int phase) {
  auto key = nums[phase];

  auto i = phase - 1;
  for (; i >= 0; i--) {
    if (nums[i] <= key) {
      break;
    }
    std::swap(nums[i+1], nums[i]);
  }
  nums[i+1] = key;
}

void PrintNums(std::vector<int>& nums) {
  for (auto p = nums.begin(); p != nums.end(); p++) {
    std::cout << *p;
    if (p + 1 != nums.end()) {
      std::cout << ' ';
    }
  }
  std::cout << '\n';
}

int main(void) {
  auto nums = BuildArrFromInput();
  for (auto i = 1; i < nums.size(); i++) {
    PrintNums(nums);
    ExecStep(nums, i);
  }
  PrintNums(nums);
  return 0;
}