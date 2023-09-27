#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;

  int taro = 0, hanako = 0;
  for (int i = 0; i < n; i++) {
    string t_str, h_str;
    cin >> t_str >> h_str;

    if (t_str > h_str) {
      taro += 3;
    } else if (t_str < h_str) {
      hanako += 3;
    } else {
      taro++;
      hanako++;
    }
  }

  cout << taro << " " << hanako << endl;

  return 0;
}
