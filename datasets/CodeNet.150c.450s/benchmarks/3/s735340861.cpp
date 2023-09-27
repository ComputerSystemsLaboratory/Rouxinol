#include <iostream>
#include <string>

using namespace std;

void print (string str, int a, int b) {
  cout << str.substr(a, b-a+1) << endl;
  return;
}

string reverse (string str, int a, int b) {
  string s1, s2_b, s2_a="", s3;
  s1 = str.substr(0, a);
  s2_b = str.substr(a, b-a+1);
  for (string::reverse_iterator ritr = s2_b.rbegin();
       ritr != s2_b.rend(); ritr++) {
    s2_a += *ritr;
  }
  s3 = str.substr(b+1);
  return s1+s2_a+s3;
}

string replace (string str, int a, int b, string p) {
  string s1, s2, s3;
  s1 = str.substr(0, a);
  s2 = str.substr(a, b-a+1);
  s3 = str.substr(b+1);
  return s1+p+s3;
}

int main(int argc, char* argv[]) {
  string str; cin >> str;
  int q; cin >> q;

  for (int i = 0; i < q; i++) {
    string cmd; cin >> cmd;
    if (cmd == "replace") {
      int op1, op2;
      string op3;
      cin >> op1 >> op2 >> op3;
      str = replace(str, op1, op2, op3);
    } else if (cmd == "reverse") {
      int op1, op2;
      cin >> op1 >> op2;
      str = reverse(str, op1, op2);
    } else if (cmd == "print") {
      int op1, op2;
      cin >> op1 >> op2;
      print(str, op1, op2);
    }
  }
  return 0;
}