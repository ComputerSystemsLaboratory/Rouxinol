#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_C&lang=jp"
#include <iostream>
#include <limits>
#include <vector>
using namespace std;
using ll = long long;

template <typename T>
void ch_min(T &left, T right)
{
  if (left > right)
  {
    left = right;
  }
}

// ----- WarshallFloyd -----

template <typename T>
void WarshallFloyd(vector<vector<T>> &V, T infinity = numeric_limits<T>::max())
{
  // It is valid to apply this method for
  //  - a directed/undirected graph,
  //  - a graph whose edge may be negative.
  //    - Negative cycle can be detected by V[i][i] < 0 if we initialize V[i][i] = 0.
  auto N{static_cast<int>(V.size())};
  for (auto k{0}; k < N; ++k)
  {
    for (auto i{0}; i < N; ++i)
    {
      for (auto j{0}; j < N; ++j)
      {
        if (V[i][k] == infinity || V[k][j] == infinity)
        {
          continue;
        }
        ch_min(V[i][j], V[i][k] + V[k][j]);
      }
    }
  }
}

// ----- main -----

template <typename T>
constexpr T Infty() { return numeric_limits<T>::max(); }

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<ll>> D(N, vector<ll>(N, Infty<ll>()));
  for (auto i{0}; i < M; ++i)
  {
    int A, B;
    ll C;
    cin >> A >> B >> C;
    D[A][B] = C;
  }
  for (auto i{0}; i < N; ++i)
  {
    D[i][i] = 0;
  }
  WarshallFloyd(D);
  for (auto i{0}; i < N; ++i)
  {
    if (D[i][i] < 0)
    {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  for (auto i{0}; i < N; ++i)
  {
    for (auto j{0}; j < N; ++j)
    {
      cout << (D[i][j] == Infty<ll>() ? "INF" : to_string(D[i][j]));
      if (j < N - 1)
      {
        cout << " ";
      }
      else
      {
        cout << endl;
      }
    }
  }
}

