#include<iostream>
using namespace std;
const int INF = 2e9;

int n, r[200000];
int after[200000];
int ans = -INF;
int main()
{
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> r[i];

  after[n - 1] = -INF;
  for(int i = n - 2; i >= 0; i--)
    after[i] = max(after[i + 1], r[i + 1]);

  for(int i = 0; i < n - 1; i++)
    ans = max(ans, after[i] - r[i]);

  cout << ans << endl;
  return 0;
}