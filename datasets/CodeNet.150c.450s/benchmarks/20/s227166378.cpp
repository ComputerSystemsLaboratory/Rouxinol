#include<iostream>
using namespace std;

int main()
{
  int Time;
  int h,m,s;

  cin >> Time;

  h = Time / 3600;
  m = (Time % 3600) / 60;
  s = (Time % 3600) % 60;

  cout << h << ":" << m << ":" << s << endl;
  return 0;
}