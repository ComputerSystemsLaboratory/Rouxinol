#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int bubble(vector<int>::iterator, vector<int>::iterator);

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  for(int i = 0; i < n; ++i) {
    int num;
    cin >> num;
    nums.push_back(num);
  }
  int count = 0;
  for(int i = 0; i < n - 1; ++i) {
    count += bubble(nums.begin(), nums.end() - i);
  }
  for(auto j = nums.begin(); j != nums.end() - 1; ++j) cout << *j << " ";
  cout << *(nums.end() - 1) << endl << count << endl;
  return 0;
}

int bubble(vector<int>::iterator begin, vector<int>::iterator end) {
  int count = 0;
  for(auto i = begin; i != (end - 1); ++i) {
    if(*i > *(i + 1)) {
      iter_swap(i, i + 1);
      ++count;
    }
  }
  return count;
}