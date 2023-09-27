#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> nums;
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    int l;
    cin >> l;
    nums.push_back(l);
  }
  vector<int> candidits;
  int min = -1;
  for(int i = 0; i < n - 1; ++i) {
    if(min == -1 || min > nums[i]) {
      min = nums[i];
      int max = *max_element(nums.begin() + i + 1, nums.end());
      candidits.push_back(max - min);
    }
  }
  int max = *max_element(candidits.begin(), candidits.end());
  cout << max << endl;
  return 0;
}