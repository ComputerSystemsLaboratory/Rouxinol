#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include<queue>
#include<set>
#include<climits>
using namespace std;

int main()
{
  while (true)
  {
    long long n = 0, min = 0, max = 0, result = 0, win = -1;
    cin >> n >> min >> max;

    if (n == 0 && min == 0 && max == 0)
      exit(0);

    vector<long long> v(n, 0);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    for (int i = min - 1; i < max; i++)
    {
      if (v[i] - v[i + 1] >= result)
      {
        result = v[i] - v[i + 1];
        // cout << result << endl;
        win = i;
      }
    }
    cout << win + 1 << endl;
  }

}

