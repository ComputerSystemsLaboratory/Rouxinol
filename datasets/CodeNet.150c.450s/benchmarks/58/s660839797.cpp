#include <iostream>
#include <cstdio>
#include <stack>
#include <string.h>

using namespace std;

int main() {
	// your code goes here
	int ans = 0;
	stack <int> s;
	char r[10];

	int a, b;
	while(scanf("%s", r) != EOF){
		if( strcmp(r, "+") == 0 ){
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a + b);
		}else if( strcmp(r, "-") ==0 ){
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(b - a);
		}else if( strcmp(r, "*") == 0 ){
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			s.push(a * b);
		}else{
			s.push( atoi(r) );
		}
	}
	cout << s.top() << endl;
	return 0;
}