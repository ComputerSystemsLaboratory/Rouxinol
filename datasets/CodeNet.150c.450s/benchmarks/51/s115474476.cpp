#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> s(28);
  for (int i = 0; i < 28; ++i)
    cin >> s[i];
  sort(s.begin(), s.end());

  for (int i = 1; i <= 30; ++i) {
    if (!binary_search(s.begin(), s.end(), i))
      cout << i << endl;
  }
  return 0;
}