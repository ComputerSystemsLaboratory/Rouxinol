#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string str;
  getline(cin, str);
  string ans = "";
  int len = str.size();
  for (int i = 0; i < len; i++) {
    if ('a' <= str[i] && str[i] <= 'z') {
      str[i] = 'A' + (str[i] - 'a');
      ans += str[i];
    } else if ('A' <= str[i] && str[i] <= 'Z') {
      str[i] = 'a' + (str[i] - 'A');
      ans += str[i];
    } else {
      ans += str[i];
    }
  }

  cout << ans << endl;
  return 0;
}