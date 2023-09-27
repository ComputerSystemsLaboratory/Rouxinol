#include <algorithm>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int32_t main() {
  while (true) {
    uint32_t n, l;
    cin >> n >> l;
    if (n == 0 && l == 0)
      break;

    vector<uint32_t> nums;
    nums.push_back(n);

    for (uint32_t i = 0; i < 20; i++) {
      ostringstream os;
      os << setfill('0') << setw(l);
      os << n;
      string str = os.str();
      sort(str.begin(), str.end());
      uint32_t min_val = stoi(str);
      reverse(str.begin(), str.end());
      uint32_t max_val = stoi(str);
      n = max_val - min_val;
      nums.push_back(n);
    }

    for (uint32_t j = 0; j < nums.size(); j++) {
      for (uint32_t i = j + 1; i < nums.size(); i++) {
        if (nums[j] == nums[i]) {
          cout << j << " " << nums[i] << " " << i - j << endl;
          goto end;
        }
      }
    }

  end:
    continue;
  }

  return 0;
}