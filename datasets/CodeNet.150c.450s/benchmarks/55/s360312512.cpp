#include <iostream>
#include <string>

using namespace std;

int main()
{
  while (true)
  {
    string s;
    cin >> s;
    if (s == "0")
      return 0;

    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
      sum += (int)s[i] - 48;
    }

    cout << sum << endl;
  }
}