#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<string> s;
  int n;
  string order, str;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> order >> str;
    if (order == "insert")
      s.insert(str);
    else if (s.find(str) != s.end())
      printf("yes\n");
    else
      printf("no\n");
  }
  return 0;
}