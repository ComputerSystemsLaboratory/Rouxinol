#include <bitset>
#include <string>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
using ll = unsigned long long;

class Kitei
{
  vector<ll> bases;

public:
  ll normalize(ll a)
  {
    // cout << "normalize" << bitset<8>(a);
    for (auto base : bases)
    {
      if ((a ^ base) < a)
      {
        a = a ^ base;

        // cout << "->" << bitset<8>(a);
      }
    }
    // cout << endl;
    return a;
  }
  void add(ll a)
  {
    a = normalize(a);
    if (a != 0)
    {
      bases.push_back(a);
      sort(bases.begin(), bases.end(), greater<ll>());
    }
  }
  bool contain(ll a)
  {
    a = normalize(a);
    return a == 0;
  }
  void print()
  {
    for (auto base : bases)
    {
      cout << bitset<8>(base) << " ";
    }
    cout << endl;
  }
};
bool solve()
{
  ll N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; i++)
    cin >> A[i];
  string S;
  cin >> S;
  Kitei kitei;
  for (int i = N - 1; i >= 0; i--)
  {
    if (S[i] == '0')
    {
      kitei.add(A[i]);
      // cout << "Adding " << A[i] << endl;
      // kitei.print();
    }
    else
    {
      // cout << "Checking " << A[i] << endl;
      // kitei.print();
      if (!kitei.contain(A[i]))
        return false;
    }
  }
  return true;
}
int main()
{
  ll T;
  cin >> T;

  for (int c = 0; c < T; c++)
  {
    cout << (solve() ? 0 : 1) << endl;
  }
}