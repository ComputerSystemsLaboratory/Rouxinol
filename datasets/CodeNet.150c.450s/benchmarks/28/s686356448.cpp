#include <iostream>
using namespace std;

int num_of_packs(int packs[], const int& n, const int& k, const int& max_load)
{
  int i = 0;
  for (int j = 0; j < k; ++j)
  {
    int truck = 0;
    while (truck + packs[i] <= max_load)
    {
      truck += packs[i];    // Load onto the truck
      ++i;                  // The next pack
      if (i == n) return n; // No more pack
    }
  }
  return i;
}

int get_p(int packs[], const int& n, const int& k)
{
  int p_left = 0;
  int p_right = 100000 * 10000;
  int p_mid;
  while (p_right - p_left > 1)
  {
    p_mid = (p_left + p_right) / 2;
    int v = num_of_packs(packs, n, k, p_mid);
    if (v >= n) p_right = p_mid;
    else p_left = p_mid;
  }

  return p_right;
}

int main()
{
  int n, k;
  cin >> n >> k;

  int packs[100000];
  for (int i = 0; i < n; ++i)
  {
    cin >> packs[i];
  }

  cout << get_p(packs, n, k) << endl;

  return 0;
}

