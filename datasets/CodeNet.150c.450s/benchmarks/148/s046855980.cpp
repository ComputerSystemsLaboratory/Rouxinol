#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    if (S == "AC")
    {
      a++;
    }
    else if (S == "WA")
    {
      b++;
    }
    else if (S == "TLE")
    {
      c++;
    }
    else if (S == "RE")
    {
      d++;
    }
  }
  cout << "AC x " << a << endl;
  cout << "WA x " << b << endl;
  cout << "TLE x " << c << endl;
  cout << "RE x " << d << endl;
}