#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, p, text;
  cin >> s >> p;
  text = s + s.substr(0, p.length() - 1);
  if (text.find(p) != string::npos)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}