#include <bits/stdc++.h>

using namespace std;

// いま見ている頂点をiとすると左の子は2*i、右の子は2*i+1となる

int main()
{
  int H;
  cin >> H;

  vector<int> v(H + 1);
  for (int i = 1; i <= H; i++)
  {
    cin >> v[i];
  }

  for (int i = 1; i <= H; i++)
  {
    int val = v[i];
    int pa = -INT_MAX;
    int left = -INT_MAX, right = -INT_MAX;

    if (i * 2 <= H)
    {
      left = v[i * 2];
    }
    if (i * 2 + 1 <= H)
    {
      right = v[i * 2 + 1];
    }
    if (i / 2 > 0)
      pa = v[i / 2];

    cout << "node " << i << ": key = " << val << ", ";
    if (pa != -INT_MAX)
      cout << "parent key = " << pa << ", ";
    if (left != -INT_MAX)
      cout << "left key = " << left << ", ";
    if (right != -INT_MAX)
      cout << "right key = " << right << ", ";

    cout << endl;
  }
}

