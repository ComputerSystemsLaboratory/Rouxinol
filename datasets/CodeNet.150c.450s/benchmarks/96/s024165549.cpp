#include <iostream>
#include <string>
using namespace std;

int main() {

  char d[5] = { '.', ',', '!', '?', ' ' };

  int m[10] = { 5, 3, 3, 3, 3,  3,  4,  3,  4 };
  int h[10] = { 0, 0, 3, 6, 9, 12, 15, 19, 22 };

  long long int n;
  cin >> n;

  for ( long long int i = 0; i < n; i++ ) {

    string in;
    cin >> in;

    long long int a = -1;
    long long int b = -1;
    char c;

    for ( long long int j = 0; j < in.size(); j++ ) {

      if ( in[j] == '0' ) {
	if ( a == -1 ) continue;
	b %= m[a-1];
	if ( a == 1 ) {
	  c = d[b];
	}else {
	  c = 'a' + h[a-1] + b;
	}
	cout << c;
	a = -1;
	b = -1;
      }else {
	a = in[j] - '0';
	b++;
      }

    }

    cout << endl;

  }

  return 0;

}