#include <bits/stdc++.h>
using namespace std;

void print(vector<int64_t> A)
{
  for (int i = 0; i < A.size(); i++)
  {
    cout << "node " << i + 1 << ": key = " << A.at(i) << ", ";
    if (i != 0)
    {
      cout << "parent key = " << A.at((i + 1) / 2 - 1) << ", ";
    }
    if ((i + 1) * 2 <= A.size())
    {
      cout << "left key = " << A.at((i + 1) * 2 - 1) << ", ";
    }
    if ((i + 1) * 2 + 1 <= A.size())
    {
      cout << "right key = " << A.at((i + 1) * 2) << ", ";
    }
    cout << endl;
  }
}

int main()
{
  int H;
  cin >> H;
  vector<int64_t> A(H);
  for (int i = 0; i < H; i++)
  {
    cin >> A.at(i);
  }
  print(A);
}

