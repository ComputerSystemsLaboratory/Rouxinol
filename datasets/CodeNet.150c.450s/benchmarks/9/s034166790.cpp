#include <iostream>
#include <string>
using namespace std;
int main() {
  int i, m, h,sum;
  string str;
  while(cin >> str) {
	if(str == "-") {break;}
	cin >> m;
	for(i = 0; i < m; i++) {
	  cin >> h;
	  sum += h;
	}
	for(i = 0; i < sum; i++) {
	  str += str[0];
	  str.erase(str.begin());
	}
	cout << str << endl;
	str.clear();
	sum = 0;
  }

  return 0;
}