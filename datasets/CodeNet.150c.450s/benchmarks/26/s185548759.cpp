#include <iostream>
using namespace std;

string judge(int x, int y);
int main()
{
  int a,b;
  cin >> a >> b;
  cout << judge(a,b) << endl;
  return 0;
}

string judge(int x, int y)
{
  if(x > y) return "a > b";
  else if(x < y) return "a < b";
  else return "a == b";
}