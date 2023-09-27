#include <bits/stdc++.h>
using namespace std;
//using ll = long long;

int Partition(vector<int> &a, int p, int r) {
  int x = a.at(r);
  int i = p-1;
  for (int j = p; j < r; j++)
  {
    if (a.at(j) <= x) {
      i++;
      swap(a.at(j), a.at(i));
    }
  }
  swap(a.at(i+1), a.at(r));
  return i+1;
}
int main(void) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) 
    cin >> a.at(i);

  int x = Partition(a, 0, n-1);
  for (int i = 0; i < n; i++) {
    if (i == x)
    cout << "[";
    cout << a.at(i);
    if (i == x)
    cout << "]";
    if (i != n-1)
    cout << " ";
  }
  cout << endl;
}
