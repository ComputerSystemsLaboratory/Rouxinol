#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<char> s;
	char c;
	while( cin.get(c)){
		if( c == '\n')
			break;
		s.push(c);
	}
	while( !s.empty()){
		cout << s.top();
		s.pop();
	}
	cout << "\n";
	return 0;
}