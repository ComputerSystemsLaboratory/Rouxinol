#include <iostream>
#include <string>
#include <vector>
#include <iterator>  // std::ostream_iterator
#include <algorithm> // std::copy
#include <sstream>   // std::stringstream

using namespace std;

void output(vector<int> nums) {
  copy(nums.begin(), nums.end()-1, ostream_iterator<int>(cout, " "));
  cout << nums.back() << endl;
}

int main(int argc, char** argv) {
  vector<int> nums;

  string tmp;

  getline(cin, tmp); // drop 1st line
  getline(cin, tmp); // 2nd line

  stringstream ss(tmp);
  int ti;
  while (ss >> ti) {
    nums.push_back(ti);
  }

  // output(nums);

  int swapcount = 0;

  for (size_t i = 0; i < nums.size(); ++i) {
    for (size_t j = nums.size() - 1; j > i; --j) {
      if (nums[j] < nums[j-1]) {
        int tmp = nums[j];
        nums[j] = nums[j-1];
        nums[j-1] = tmp;
        swapcount++;
      }
    }
  }

  output(nums);
  cout << swapcount << endl;

  return 0;
}


