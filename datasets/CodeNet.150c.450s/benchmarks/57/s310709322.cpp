#include <iostream>
using namespace std;

int main(){
	int a, c;
	char b;
	
	while(true){
		cin >> a >> b >> c;
		
		if(b == '?') break;

		if(b == '+') cout << a + c << endl;
		else if(b == '-') cout << a - c << endl;
		else if(b == '*') cout << a * c << endl;
		else cout << a / c << endl;
	}

	return 0;
}