#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int a=0,b=0;
	int ans=0;
	char op;

	

	while(1){
		cin >> a >> op >> b;
	if(op == '+'){
		ans = a + b;
		cout << ans << endl;
	}
	
	else if(op == '-'){
		ans = a - b;
		cout << ans << endl;
	}

	else if(op == '*'){
		ans = a * b;
		cout << ans << endl;
	}

	else if(op == '/'){
		ans = a / b;
		cout << ans << endl;
	}
	else{
		break;
	}
	}
	
	return 0;

}