#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string t_str, h_str;
  int t_point = 0, h_point = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t_str >> h_str;
    if (t_str > h_str) {
      t_point += 3;
    } else if (t_str < h_str) {
      h_point += 3;
    } else {
      t_point += 1;
      h_point += 1;
    }
  }
  cout << t_point << " " << h_point << endl;

  return 0;
}