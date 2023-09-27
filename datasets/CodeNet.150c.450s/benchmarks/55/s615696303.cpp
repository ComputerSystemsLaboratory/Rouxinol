#include <iostream>
using namespace std;
int main() {
  char *str = new char[1001];
  long sum;
  int i;
  while(cin >> str) {
	sum = 0;
	i = 0;
	if(str[0] == '0') {break;}
	while(str[i] != '\0') {
	  sum += str[i++] - '0';
	}
	cout << sum << endl;
  }
  return 0;
}