#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str, tmp;
  int n, m;
  while (cin >> str, str != "-"){
    cin >> n;
    for (int i = 0; i < n; i++){
      cin >> m;
      tmp = str.substr(0, m);
      str.erase(str.begin(), str.begin() + m);
      str += tmp;
    }
    cout << str << endl;
  }
  return (0);
}