#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int a, b;
  cin >> a >> b;
  if(a==b)
    cout << "a == b" << endl;
  else
    cout << (a > b ? "a > b" : "a < b") << endl;
  return 0;
}