#include <iostream>
#include <string>

using namespace std;

string translate (string s) {
  string ans = "";
  for (string::iterator itr = s.begin();
       itr != s.end(); itr++) {
    char c = *itr;
    if ('A' <= c && c <= 'Z') ans += c + ('a' - 'A');
    else ans += c;
  }
  return ans;
}

int main(int argc, char* argv[]) {
  string comp, tr_comp, str, tr_str;
  cin >> comp; tr_comp = translate(comp);

  int ans = 0;
  while (cin >> str) {
    if (str == "END_OF_TEXT") break;
    tr_str = translate(str);
    if (tr_str == tr_comp) ans++;
  }
  cout << ans << endl;
  return 0;
}