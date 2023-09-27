#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string s; cin >> s;
  string p; cin >> p;

  int i;
  for (i = 0; i < p.length(); i++) {
    int s2_b = s.length() - i, s2_e = s.length();
    int s1_b = 0, s1_e = s2_b;

    string s1 = s.substr(s1_b, s1_e);
    string s2 = s.substr(s2_b, s2_e);
    string new_s = s2 + s1;
    if (new_s.find(p) != string::npos) {
      break;
    }
  }
  if (i == p.length()) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}