const int tt = 10000;

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string toStr(int n);
string intToString(int n);

int main() {
  int a, b, c, d, e, f;
  
  while(cin >> a >> b >> c >> d >> e >> f) {
    c = c * tt;
    f = f * tt;

    int det = a * e - b * d;

    int x = ( e * c - b * f) / det;
    int y = (-d * c + a * f) / det;
//    cout << x << y << endl;

    cout << toStr(x) << " " << toStr(y) << endl;
  }
}

string toStr(int n) {
  string pm, val;
  
  if (n < 0) {
    pm = "-";
    n = -n;
  } else {
    pm = "";
  }

  int ipart = n / tt;
  int fpart = (n - ipart * tt) + tt + 5;

  val = pm + intToString(ipart) + "." + intToString(fpart).substr(1, 3);
  return val;
}

string intToString(int n) {
  stringstream ss;
  ss << n;
  return ss.str();
}