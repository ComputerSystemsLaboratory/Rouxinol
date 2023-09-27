#include <iostream>
#include <string>
using namespace std;

int main() {

  long long int n;
  cin >> n;

  for ( long long int i = 0; i < n; i++ ) {

    string in0, in1;
    cin >> in0 >> in1;

    long long int k = 1;

    long long int m0 = 0;
    for ( long long int j = 0; j < in0.size(); j++ ) {

      if ( in0[j] <= '9' ) {
	k = in0[j] - '0';
      }else {
	if ( in0[j] == 'm' ) {
	  m0 += k * 1000;
	}else if ( in0[j] == 'c' ) {
	  m0 += k * 100;
	}else if ( in0[j] == 'x' ) {
	  m0 += k * 10;
	}else {
	  m0 += k * 1;
	}
	k = 1;
      }

    }

    long long int m1 = 0;
    for ( long long int j = 0; j < in1.size(); j++ ) {

      if ( in1[j] <= '9' ) {
	k = in1[j] - '0';
      }else {
	if ( in1[j] == 'm' ) {
	  m1 += k * 1000;
	}else if ( in1[j] == 'c' ) {
	  m1 += k * 100;
	}else if ( in1[j] == 'x' ) {
	  m1 += k * 10;
	}else {
	  m1 += k * 1;
	}
	k = 1;
      }

    }

    m0 += m1;

    if ( m0 >= 1000 ) {
      if ( m0 >= 2000 ) {
	cout << m0 / 1000;
      }
      cout << "m";
      m0 %= 1000;
    }
    if ( m0 >= 100 ) {
      if ( m0 >= 200 ) {
	cout << m0 / 100;
      }
      cout << "c";
      m0 %= 100;
    }
    if ( m0 >= 10 ) {
      if ( m0 >= 20 ) {
	cout << m0 / 10;
      }
      cout << "x";
      m0 %= 10;
    }
    if ( m0 >= 1 ) {
      if ( m0 >= 2 ) {
	cout << m0 / 1;
      }
      cout << "i";
      m0 %= 1;
    }
    cout << endl;

  }

  return 0;

}