#include <iostream>

using namespace std;

int main(){
	int a, b, ans;
	char c;

	while(1){
	cin >> a >> c >> b;

	if(c == '+'){
		ans = a + b;
	}
	if(c == '-'){
		ans = a - b;
	}
	if(c == '*'){
		ans = a * b;
	}
	if(c == '/'){
		ans = a / b;
	}
	if(c == '?'){
		break;
	}

	cout << ans << endl;
}
}