#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
  string a;
  while (cin >> a) {
    reverse(a.begin(), a.end());
    cout << a << endl;
  }
}