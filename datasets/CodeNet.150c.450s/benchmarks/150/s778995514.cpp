#include <cstdint>

using namespace std;

#define ARRAY_SIZE 10000

uint32_t countings[ARRAY_SIZE];

void counting_sort_sort(uint32_t vec[], size_t size, uint32_t result[])
{
  for (uint32_t i = 0; i < ARRAY_SIZE; i++) {
    countings[i] = 0;
  }

  for (uint32_t i = 0; i < size; i++) {
    countings[vec[i]]++;
  }

  for (uint32_t i = 1; i < ARRAY_SIZE; i++) {
    countings[i] = countings[i] + countings[i - 1];
  }

  for (int32_t i = size - 1; i >= 0; i--) {
    countings[vec[i]]--;
    result[countings[vec[i]]] = vec[i];
  }
}

#if !defined(TEST)

#include <iostream>
#include <vector>

vector<uint32_t> vec;
#define SIZE 2000000
uint32_t result[SIZE];

int32_t main()
{
  uint32_t num;
  cin >> num;
  for (uint32_t i = 0; i < num; i++) {
    uint32_t val;
    cin >> val;
    vec.push_back(val);
  }

  counting_sort_sort(&vec[0], vec.size(), result);

  for (uint32_t i = 0; i < num; i++) {
    if (i != 0) cout << " ";
    cout << result[i];
  }
  cout << endl;

  return 0;
}
#endif