#include<iostream>
#include<string>
#include<set>

using namespace std;

int main() {
  set<string> d;
  int n, a;
  string o, b;
  cin >> n;
  for (a = 1; a <= n; a++) {
    cin >> o >> b;
    if (o == "insert") {
      d.insert(b);
    } else if (d.find(b) != d.end()) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
return 0;
}
