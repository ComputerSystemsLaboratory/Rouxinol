#include <iostream>


int* sortArray(int* nums) {
  int length = sizeof(nums) / sizeof(nums[0]);
  length += 1;
  int temp; 
  for (int i = 0; i < length - 1; i ++) { 
    for (int j = i + 1; j < length; j ++) {
      if (nums[i] > nums[j]) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }
  return nums;
} 


int main() {
  int inputs[3], *sorted;
  for (int i = 0; i < 3; i ++) std::cin >> inputs[i];
  sorted = sortArray(inputs);

  std::cout << sorted[0] << " " << sorted[1] << " " << sorted[2] << std::endl;
  return 0;
}