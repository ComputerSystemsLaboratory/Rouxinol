#include <cstdint>

using namespace std;

uint64_t merge(uint32_t vec[], size_t start, size_t mid, size_t end)
{
  uint32_t left_num = mid - start;
  uint32_t *left = new uint32_t[left_num + 1];

  uint32_t right_num = end - mid;
  uint32_t *right = new uint32_t[right_num + 1];

  for (uint32_t i = 0; i < left_num; i++) {
    left[i] = vec[start + i];
  }
  left[left_num] = UINT32_MAX;

  for (uint32_t i = 0; i < right_num; i++) {
    right[i] = vec[mid + i];
  }
  right[right_num] = UINT32_MAX;

  uint64_t cnt = 0;
  uint32_t i_left = 0, i_right = 0;
  for (uint32_t i = start; i < end; i++) {
    if (left[i_left] < right[i_right]) {
      vec[i] = left[i_left];
      i_left++;
    } else {
      vec[i] = right[i_right];
      cnt += left_num - i_left;
      i_right++;
    }
  }

  delete[] left;
  delete[] right;
  return cnt;
}

uint64_t merge_sort(uint32_t vec[], size_t start, size_t end)
{
  if (start + 1 < end) {
    size_t mid = (start + end) / 2;
    uint64_t m1 = merge_sort(vec, start, mid);
    uint64_t m2 = merge_sort(vec, mid, end);
    uint64_t m3 = merge(vec, start, mid, end);
    return m1 + m2 + m3;
  }

  return 0;
}

uint64_t number_of_inversion(uint32_t vec[], size_t size)
{
  return merge_sort(vec, 0, size);
}

#if !defined(TEST)
#include <iostream>
#include <vector>
static vector<uint32_t> vec;

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    uint32_t val;
    cin >> val;
    vec.push_back(val);
  }

  cout << number_of_inversion(&vec[0], vec.size()) << endl;

  return 0;
}
#endif