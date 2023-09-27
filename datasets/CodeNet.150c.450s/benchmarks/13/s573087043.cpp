#include <iostream>

using namespace std;

int main(void) {
  string s,p;
  bool flag = false;
  cin >> s;
  cin >> p;
  s += s;
  if(s.find(p) != string::npos)
    flag = true;
  if(flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}