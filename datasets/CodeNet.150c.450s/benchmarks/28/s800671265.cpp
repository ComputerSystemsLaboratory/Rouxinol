#include <cstdint>
#include <vector>

using namespace std;

size_t allocation_load_capcity(vector<uint32_t> baggages, int64_t capacity, uint32_t tracks)
{
  uint32_t num = 0;

  for (uint32_t i = 0; i < tracks; i++) {
    int64_t track_capacity = 0;
    while ((track_capacity + baggages[num]) <= capacity) {
      track_capacity += baggages[num];
      num++;
      if (num == baggages.size()) return num;
    }
  }

  return num;
}

size_t allocation_max_load_capcity(vector<uint32_t> baggages, uint32_t tracks)
{
  int64_t lindex = 0;
  int64_t rindex = 100000 * 10000;
  while (rindex - lindex > 1) {
    int64_t capacity = (lindex + rindex) / 2;
    uint32_t num = allocation_load_capcity(baggages, capacity, tracks);
    if (num >= baggages.size()) {
      rindex = capacity;
    } else
      lindex = capacity;
  }

  return rindex;
}

#if !defined(TEST)

#include <iostream>
static vector<uint32_t> baggages;

int32_t main(void)
{
  uint32_t num, tracks;
  cin >> num >> tracks;

  for (uint32_t i = 0; i < num; i++) {
    uint32_t weight;
    cin >> weight;
    baggages.push_back(weight);
  }

  cout << allocation_max_load_capcity(baggages, tracks) << endl;

  return 0;
}
#endif