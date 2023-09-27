#include <iostream>
#include <string>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    cout << to_string(a+b).size() << endl;
  }
}