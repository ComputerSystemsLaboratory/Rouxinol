#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()

void print_vec(vector<int> vec)
{
  cout << "[";
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec.at(i) << ", ";
  }
  cout << "]" << endl;
}

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  if (a < b && b < c)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
}

