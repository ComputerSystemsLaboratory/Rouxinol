#include <iostream>
#include <string>
using namespace std;
int main() {
  string str, order, p;
  int q, a, b, i;

  cin >> str;
  cin >> q;
  while(q-- > 0) {
	cin >> order >> a >> b;
	string buf;
	if(order == "print") {
	  for(i = a; i <= b; i++) {
		cout << str[i];
	  }
	  cout << endl;
	}
	else if(order == "reverse") {
	  for(i = a; i <= b; i++) {
		buf = str[i] + buf;
	  }
	  str.replace(a, b - a + 1, buf);
	}
	else if(order == "replace") {
	  cin >> p;
	  str.replace(a, b - a + 1, p);
	}
  }
  return 0;
}