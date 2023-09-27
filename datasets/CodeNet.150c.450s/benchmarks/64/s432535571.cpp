#include <cstdint>
#include <vector>

using namespace std;

static bool aux(vector<uint32_t> &vec, uint32_t index, int32_t val)
{
  if (val == 0) return true;

  if (vec.size() == index || (val < 0)) {
    return false;
  }

  int32_t rem = val - vec[index];

  return aux(vec, index + 1, rem) || aux(vec, index + 1, val);
}

bool exausitve_search_search(vector<uint32_t> vec, int32_t val)
{
  return aux(vec, 0, val);
}

#if !defined(TEST)
#include <iostream>

static vector<uint32_t> array;

int32_t main()
{
  uint32_t num;
  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    uint32_t val;
    cin >> val;
    array.push_back(val);
  }

  cin >> num;

  for (uint32_t i = 0; i < num; i++) {
    uint32_t val;
    cin >> val;

    if (exausitve_search_search(array, val)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}

#endif