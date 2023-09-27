#include <cstdint>
#include <utility>
#include <vector>

using namespace std;

size_t partition(uint32_t array[], size_t start, size_t end)
{
  int32_t mid = array[end];
  int32_t less_than = 0;
  for (uint32_t i = start; i < end; i++) {
    if (array[i] <= mid) {
      swap(array[less_than], array[i]);
      less_than++;
    }
  }
  swap(array[end], array[less_than]);
  return less_than;
}

#if !defined(TEST)
#include <iostream>
#include <vector>

static vector<uint32_t> vec;
int32_t main()
{
  uint32_t n;
  cin >> n;

  for (uint32_t i = 0; i < n; i++) {
    uint32_t val;
    cin >> val;
    vec.push_back(val);
  }
  size_t mid = partition(&vec[0], 0, vec.size() - 1);

  for (uint32_t i = 0; i < vec.size(); i++) {
    if (i != 0) cout << " ";
    if (i == mid) cout << "[";
    cout << vec[i];
    if (i == mid) cout << "]";
  }

  cout << endl;

  return 0;
}
#endif