#include <cstdint>
#include <iostream>
#include <vector>

using namespace std;

static inline uint32_t left(uint32_t i)
{
  return i * 2 + 1;
}
static inline uint32_t right(uint32_t i)
{
  return i * 2 + 2;
}

static void max_heapify(vector<int64_t> &vec, uint32_t i)
{
  uint32_t largest = i;
  if (left(i) < vec.size()) {
    if (vec[largest] < vec[left(i)]) {
      largest = left(i);
    }
  }

  if (right(i) < vec.size()) {
    if (vec[largest] < vec[right(i)]) {
      largest = right(i);
    }
  }

  if (largest != i) {
    swap(vec[largest], vec[i]);
    max_heapify(vec, largest);
  }
}

void build_max_heap(vector<int64_t> &vec)
{
  for (int32_t i = (vec.size() + 1) / 2; i >= 0; i--) {
    max_heapify(vec, i);
  }
}

#include <iostream>
static vector<int64_t> vec;

int32_t main()
{
  int32_t num;
  cin >> num;

  for (int32_t i = 0; i < num; i++) {
    int64_t val;
    cin >> val;
    vec.push_back(val);
  }

  build_max_heap(vec);

  for (uint32_t i = 0; i < vec.size(); i++) {
    cout << " " << vec[i];
  }
  cout << endl;

  return 0;
}