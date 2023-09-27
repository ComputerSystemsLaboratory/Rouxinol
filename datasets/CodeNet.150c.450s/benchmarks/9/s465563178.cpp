#include <iostream>
#include <string>

using namespace std;

int main() {
  string ss, left, right, end;
  int times, in;

  while (true)
  {
    cin >> ss;
    if (ss == "-") { break; }

    cin >> times;
    for (int i = 0; i < times; i++)
    {
      cin >> in;

      right = ss.substr(0, in);
      left = ss.substr(in, ss.size()-1);
      
      ss = left + right;
    }

    cout << ss << endl;
  }

  return 0;
}