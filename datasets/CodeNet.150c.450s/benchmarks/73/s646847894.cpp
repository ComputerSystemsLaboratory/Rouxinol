#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BIT
{
public:
  int N;
  vector<T> bit;

  BIT(int n, T m = 0)
  {
    init(n, m);
  }

  void init(int n, int m)
  {
    N = n;
    bit.resize(n + 1);
    for (int i = 0; i < bit.size(); i++)
    {
      bit[i] = m;
    }
  }

  int64_t sum(int i)
  {
    T s = 0;
    while (i > 0)
    {
      s += bit[i];
      i -= i & -i;
    }
    return s;
  }

  void add(int i, T x)
  {
    while (i <= N)
    {
      bit[i] += x;
      i += i & -i;
    }
  }
};

int main()
{
  int N, Q, c, x, y;
  cin >> N >> Q;
  BIT<int64_t> B(N + 1);
  queue<int64_t> ans;
  for (int i = 0; i < Q; i++)
  {
    cin >> c >> x >> y;
    if (c)
    {
      ans.push(B.sum(y) - B.sum(x - 1));
    }
    else
    {
      B.add(x, y);
    }
  }
  while (ans.size())
  {
    cout << ans.front() << endl;
    ans.pop();
  }
}
