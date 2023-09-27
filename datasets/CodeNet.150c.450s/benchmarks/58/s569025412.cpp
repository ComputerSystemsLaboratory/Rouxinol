#include<iostream>
#include<stack>
using namespace std;

int main() {
  string str;
  stack<int> tmp;
  while(cin >> str) {

    if(isdigit(str[0])) {
      tmp.push( stoi(str) );
    } else {
      int b = tmp.top(); tmp.pop();
      int a = tmp.top(); tmp.pop();

      if(str == "+") {
	tmp.push( a+b );
      } else if(str == "-") {
	tmp.push( a-b );
      } else if(str == "*") {
	tmp.push( a*b );
      }
    }
  }

  cout << tmp.top() << endl;
}