#include <iostream>
#include <vector>
using namespace std;

int parent(int i)
{
  return i / 2;
}

int left(int i)
{
  return i * 2;
}

int right(int i)
{
  return i * 2 + 1;
}

int main()
{
  int i, H, k;
  vector<int> q; q.push_back(0);
  cin >> H;
  for (i = 1; i <= H; i++) {
    cin >> k;
    q.push_back(k);
  }
  for (i = 1; i <= H; i++) {
    cout << "node " << i << ": key = " << q.at(i) << ", ";
    if (1 != i)
      cout << "parent key = " << q.at(parent(i)) << ", ";
    int l, r;
    if ((l = left(i)) <= H)
      cout << "left key = " << q.at(l) << ", ";
    if ((r = right(i)) <= H)
      cout << "right key = " << q.at(r) << ", ";
    cout << endl;
  }
  return 0;
}