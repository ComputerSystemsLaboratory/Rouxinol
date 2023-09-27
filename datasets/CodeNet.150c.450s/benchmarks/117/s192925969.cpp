#include <cstdint>

using namespace std;

static uint32_t cnt = 0;

static void merge(uint32_t array[], uint32_t left, uint32_t mid, uint32_t right)
{
  int32_t left_n = mid - left;
  int32_t right_n = right - mid;
  uint32_t *left_array = new uint32_t[left_n + 1];
  uint32_t *right_array = new uint32_t[right_n + 1];

  for (uint32_t i = 0; i < left_n; i++) {
    left_array[i] = array[i + left];
  }
  left_array[left_n] = UINT32_MAX;

  for (uint32_t i = 0; i < right_n; i++) {
    right_array[i] = array[i + mid];
  }
  right_array[right_n] = UINT32_MAX;

  uint32_t left_index = 0, right_index = 0;
  for (uint32_t i = left; i < right; i++) {
    uint32_t left = left_array[left_index];
    uint32_t right = right_array[right_index];
    if (left < right) {
      array[i] = left;
      left_index++;
    } else {
      array[i] = right;
      right_index++;
    }
    cnt++;
  }

  delete[] left_array;
  delete[] right_array;
}

static void sort(uint32_t array[], uint32_t left, uint32_t right)
{
  if (right - left <= 1) return;

  uint32_t mid = (left + right) / 2;
  sort(array, left, mid);
  sort(array, mid, right);
  merge(array, left, mid, right);
}

void merge_sort_merge(uint32_t array[], size_t len)
{
  sort(array, 0, len);
}

#if !defined(TEST)
#include <cstdio>

#define ARRAY_SIZE 500000

static uint32_t array[ARRAY_SIZE];

int32_t main()
{
  int32_t num;
  scanf("%d", &num);

  for (uint32_t i = 0; i < num; i++) {
    scanf("%u", &array[i]);
  }
  merge_sort_merge(array, num);

  for (uint32_t i = 0; i < num; i++) {
    if (i != 0) printf(" ");
    printf("%d", array[i]);
  }
  printf("\n");
  printf("%d\n", cnt);

  return 0;
}
#endif