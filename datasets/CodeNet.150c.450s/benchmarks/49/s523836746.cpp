#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
  while (cin >> n, n) {
    vector<int> v = vector<int>(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    sort(v.begin(), v.end());

    int sum = accumulate(v.begin(), v.end(), -(v[0]+v[v.size()-1]));
    cout << (sum / (v.size()-2)) << endl;
  }
  return 0;
}