#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int sum;
  while(1) {
    cin >> str;
    if(str == "0") break;
    sum = 0;
    for(int a = 0; a < str.size(); ++a) {
      sum = sum + str[a] - '0';
    }

    cout << sum << endl;
  }
}