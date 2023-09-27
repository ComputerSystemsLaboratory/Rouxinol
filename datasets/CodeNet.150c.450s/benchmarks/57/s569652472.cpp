#include<iostream>
using namespace std;

int main(){
	int a[10010];
	int b[10010];
	char op[10010];
	int i = 0, i2, i3 = 0;
	while (i < 10010){
		cin >> a[i];
		cin >> op[i];
		cin >> b[i];
		if (op[i] == '?'){
			i2 = i;
			break;
		}
		i++;
	}
	while (i3 <= i2 + 1){
		if (op[i3] == '+'){
			cout << a[i3] + b[i3] << endl;
		}
		if (op[i3] == '-'){
			cout << a[i3] - b[i3] << endl;
		}
		if (op[i3] == '*'){
			cout << a[i3] * b[i3] << endl;
		}
		if (op[i3] == '/'){
			cout << a[i3] / b[i3] << endl;
		}
		i3++;
	}
	return 0;
}