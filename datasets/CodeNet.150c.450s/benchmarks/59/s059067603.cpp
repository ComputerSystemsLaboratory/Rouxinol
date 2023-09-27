#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string str, const char delim) {
  std::vector<std::string> result;
  std::stringstream ss(str);
  std::string item;
  while (std::getline(ss, item, delim)) {
    result.push_back(item);
  }
  return result;
}

std::vector<int> map_to_i(const std::vector<std::string> strs) {
  std::vector<int> result;
  for (auto s : strs) { result.push_back(std::atoi(s.c_str())); }
  return result;
}

void print_result(const std::vector<int> nums) {
  std::stringstream ss;
  ss << nums[0];
  for (auto i = 1; i < nums.size(); ++i) { ss << " " << nums[i]; }
  std::cout << ss.str() << std::endl;
}

std::vector<int> insersion_sort(const std::vector<int> nums, int size) {
  std::vector<int> result;
  for (auto n : nums) { result.push_back(n); }
  for (auto i = 1; i < size; ++i) {
    auto v = result[i];
    auto j = i - 1;
    while (j >= 0 && result[j] > v) {
      result[j + 1] = result[j];
      //std::cout << "i, j, v, result[j+1]: " << i << ", " << j << ", " << v << ", " << result[j+1] << std::endl;
      --j;
    }
    result[j + 1] = v;
    print_result(result);
  }
  return result;
}

int main(void) {
  int size;
  std::string nums_str;

  std::cin >> size;
  std::cin.ignore();
  std::getline(std::cin, nums_str);
  auto elems = map_to_i(split(nums_str, ' '));

  print_result(elems);
  insersion_sort(elems, size);

  return 0;
}