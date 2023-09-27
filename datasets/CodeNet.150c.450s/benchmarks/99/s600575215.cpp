#include <vector>
#include <iostream>
#include <string>

using namespace std;

string i_to_mcxi(int x) {
  vector <int> d;
  int i;
  string s;
  string s2 = "ixcm";

  for (i = 0; i < 4; i++) {
    d.push_back(x % 10);
    x /= 10;
  }

  for (i = 3; i >= 0; i--) {
    if (d[i] == 1) {
      s.push_back(s2[i]);
    } else if (d[i] == 0) {
      ;
    } else {
      s.push_back('0' + d[i]);
      s.push_back(s2[i]);
    }
  }
  return s;
}

int mcxi_to_i(string s) {
  int j;
  int x;
  int n;
  int coef;

  n = s.length();

  x = 0;
  coef = 1;
  for (j = 0; j < n; j++) {
    if (s[j] == 'm') {
      x += coef * 1000;
      coef = 1;
    } else if (s[j] == 'c') {
      x += coef * 100;
      coef = 1;
    }  else if (s[j] == 'x') {
      x += coef * 10;
      coef = 1;
    } else if (s[j] == 'i') {
      x += coef;
      coef = 1;
    } else if (s[j] >= '2' && s[j] <= '9') {
      coef = (s[j] - '0');
    }
  }
  return x;
}


int main(void) {
  int n, i;

  cin >> n;

  for (i = 0; i < n; i++) {
    string s1, s2;
    int x1, x2;
    cin >> s1;
    cin >> s2;
    x1 = mcxi_to_i(s1);
    x2 = mcxi_to_i(s2);
    cout << i_to_mcxi(x1 + x2) << endl;
  }

  return 0;

}