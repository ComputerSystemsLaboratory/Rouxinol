#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  for (int a, b; cin >> a >> b; ) {
    stringstream ss;
    ss << a + b;
    cout << ss.str().length() << endl;
  }

  return 0;
}