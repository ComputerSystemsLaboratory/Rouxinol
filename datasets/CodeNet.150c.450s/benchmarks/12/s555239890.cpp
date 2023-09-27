#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static vector<int64_t> vec;

static inline int32_t parent(uint32_t index)
{
  if (index < 1) return -1;
  return (index - 1) / 2;
}

static inline uint32_t left(uint32_t index)
{
  return 2 * index + 1;
}

static inline uint32_t right(uint32_t index)
{
  return 2 * index + 2;
}

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    int64_t val;
    cin >> val;
    vec.push_back(val);
  }

  for (uint32_t i = 0; i < num; i++) {
    cout << "node " << i + 1 << ": ";
    cout << "key = " << vec[i] << ", ";
    if (parent(i) >= 0) {
      cout << "parent key = " << vec[parent(i)] << ", ";
    }
    if (left(i) < vec.size()) {
      cout << "left key = " << vec[left(i)] << ", ";
    }
    if (right(i) < vec.size()) {
      cout << "right key = " << vec[right(i)] << ", ";
    }
    cout << endl;
  }

  return 0;
}