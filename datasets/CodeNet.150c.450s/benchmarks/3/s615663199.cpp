#include <iostream>
#include <string>

using namespace std;

string strrev(string s, int a, int b){
  string ans = "";
  for (int i = a; i <= b; i++) {
    ans = s[i] + ans;
  }
  return ans;
}

int main(){
  string s;
  int n;
  cin >> s >> n;
  while (n) {
    n--;
    string cmd;
    int a, b;
    cin >> cmd;
    cin >> a >> b;
    if (cmd == "replace") {
      string s1, s2, s3;
      cin >> s2;
      s1 = s.substr(0, a);
      s3 = s.substr(b+1);
      s = s1 + s2 + s3;
    } else if (cmd == "reverse") {
      string s1, s2, s3;
      s1 = s.substr(0, a);
      s2 = strrev(s, a, b);
      s3 = s.substr(b+1);
      s = s1 + s2 + s3;
    }
    else {
      for (int i = a; i < b+1; i++) cout << s[i];
      cout << endl;
    }
  }
  return 0;
}