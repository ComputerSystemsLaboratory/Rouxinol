#include <iostream>
using namespace std;

int main(){
	int a, b, i;
	int ans[10000];
	char op;
	
	for(i = 0; i <= 9999; i++){
		cin >> a >> op >> b;
		if(op == '?'){
			break;
		}
		switch(op){
			case '+':
				ans[i] = a+b;
				break;
			case '-':
				ans[i] = a-b;
				break;
			case '/':
				ans[i] = a/b;
				break;
			case '*':
				ans[i] = a*b;
				break;
		}
	}
	
	for(int j = 0; j <= i-1; j++){
		cout << ans[j] << endl;
	}
	
	return 0;
}