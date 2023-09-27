#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
  string str;
  cin >> str;

  int q;
  cin >> q;

  string ord, p;
  int a = 0, b = 0;
  for (int i = 0; i < q; i++) {
    cin >> ord >> a >> b;

    if (ord == "print") {
      for (int j = a; j <= b; j++) {
	cout << str[j];
      }

      cout << endl;
    }

    if (ord == "reverse") {
      string tmp = str.substr(a, b-a+1);
      int n = tmp.size();
      for ( int j = 0; j < n; j++) {
	str[j+a] = tmp[n-j-1];
      }
    }

    if (ord == "replace") {
      cin >> p;
      str.replace(a,b-a+1,p);
    }
    
  }

  return 0;
}

