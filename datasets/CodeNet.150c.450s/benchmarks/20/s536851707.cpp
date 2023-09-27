#include <iostream>

int main(int argc, char *argv[])
{
  using namespace std;
  int t;
  cin >> t;
  int h = t / 3600;
  int m = (t - h * 3600) / 60;
  int s = t - h * 3600 - m * 60;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}