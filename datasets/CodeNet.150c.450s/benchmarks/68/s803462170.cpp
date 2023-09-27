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
    long long n, tmp = LLONG_MAX;
    cin >> n;

    if (n == 0)
      exit(0);

    vector<long long> v(n, 0);
    for (int i = 0; i < n; i++)
      cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 1; i < n; i++)
    {
      if (v[i] - v[i - 1] < tmp)
        tmp = v[i] - v[i - 1];
    }

    cout << tmp << endl;
  }

}

