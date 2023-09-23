#include <iostream>
using namespace std;

int ct, n, s;

void sum(int m, int i, int n){
  if (n == 0 && m == s){
    ct++;
    return;
  }
  if (n == 0 || i == 10)  return;
  sum(m, i + 1, n);
  sum(m + i, i + 1, n - 1);
}

int main()
{
  while (cin >> n >> s, n){
    ct = 0;
    sum(0, 0, n);
    cout << ct << endl;
  }
  return (0);
}