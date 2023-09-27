#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int nnum;
  cin >> nnum;
  vector<int> in(nnum);
  for(int i = 0; i < nnum; ++i) {
    int num;
    cin >> num;
    in[i] = num;
  }
  multiset<int> nums;
  for(int i = 0; i < nnum; ++i) {
    nums.insert(in[i]);
    vector<int> outs(nnum);
    for(auto j = nums.begin(); j != nums.end(); ++j) {
      outs[distance(nums.begin(), j)] = *j;
    }
    for(int j = i + 1; j < nnum; ++j) {
      outs[j] = in[j];
    }
    cout << outs[0];
    for(auto j = outs.begin() + 1; j != outs.end(); ++j) {
      cout << " " << *j;
    }
    cout << endl;
  }
  return 0;
}