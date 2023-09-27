#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  string str;
  vector<string> strs;
  int n;
  cin >> str >> n;

  for (int i=0;i<n;i++) {
    string op;
    int a, b;
    cin >> op >> a >> b;
    if (op == "replace") {
      string tmp;
      cin >> tmp;
      // str.replace(a, b, tmp);
      tmp = str.substr(0, a) + tmp + str.substr(b+1);
      str = tmp;
    } else if (op == "reverse") {
      reverse(str.begin()+a, str.begin()+b+1);
    } else {
      strs.push_back(str.substr(a, b-a+1));
    }
  }

  for (int i=0;i<strs.size();i++)
    cout << strs[i] << endl;
}

