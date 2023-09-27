#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string alphs;
  int m, h;
  while(cin >> alphs){
    if (alphs == "-") break;
    cin >> m;
    for (int i = 0; i < m; i++) {
      cin >> h;
      alphs = alphs + (alphs.substr(0, h));
      alphs.erase(0, h);
    }
    cout << alphs << endl;
  }
  return 0;
}