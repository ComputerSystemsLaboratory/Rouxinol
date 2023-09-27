#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  int n; cin >> n;
  int taro_p = 0, hanako_p = 0;

  for (int i = 0; i < n; i++) {
    string taro, hanako;
    cin >> taro >> hanako;
    if (taro == hanako) {
      taro_p += 1; hanako_p += 1;
    } else if (taro < hanako) {
      hanako_p += 3;
    } else {
      taro_p += 3;
    }
  }

  cout << taro_p << ' ' << hanako_p << endl;
  return 0;
}