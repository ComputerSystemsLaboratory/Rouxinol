#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	int n;
	while (cin >> n){
		if (n != 0) {
			s.push(n);
		}
		else {
			cout << s.top() << endl;
			s.pop();
		}
	}
	return 0;
}
