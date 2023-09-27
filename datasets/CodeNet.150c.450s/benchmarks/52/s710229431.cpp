#include <iostream>
#include <stack>
using namespace std;

stack <int> s;
int k;
int ans;

int main(){
	
	while(cin >> k ){
		if( k != 0 ){
			s.push(k);
		} else {
			cout << s.top() << endl;
			s.pop();
		}
	}
}