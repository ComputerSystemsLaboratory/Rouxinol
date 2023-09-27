#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

  string in;
  stack< long long int > s;

  while( cin >> in ) {
    if ( in == "@" ) break;
    if ( in == "+" ) {

      long long int a = s.top();
      s.pop();
      long long int b = s.top();
      s.pop();
      s.push( a + b );

    }else if ( in == "-" ) {

      long long int a = s.top();
      s.pop();
      long long int b = s.top();
      s.pop();
      s.push( b - a );

    }else if ( in == "*" ) {

      long long int a = s.top();
      s.pop();
      long long int b = s.top();
      s.pop();
      s.push( a * b );

    }else {

      long long int k = 0;
      for ( long long int i = 0; i < in.size(); i++ ) {
	k = k * 10 + in[i] - '0';
      }
      s.push( k );

    }

  }

  cout << s.top() << endl;

  return 0;

}