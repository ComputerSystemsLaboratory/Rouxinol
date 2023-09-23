#include<iostream>
using namespace std;
int main()
{
	int a[100000], b[100000];
	char op[100000];
	int i,j,r,d=0;
	for (i = 0; i < 98000; i++){
		cin >> a[i] >> op[i] >> b[i];
		if (op[i] == '?'){
			j = i;
			break;
		}
	}
	for (i = 0; i < j; i++){
		if (op[i] == '+'){
			r = a[i] + b[i];
			d = 1;
		}
		else if (op[i] == '-'){
			r = a[i] - b[i];
			d = 1;
		}
		else if (op[i] == '*'){
			r = a[i] * b[i];
			d = 1;
		}
		else if (op[i] == '/'){
			r = a[i] / b[i];
			d = 1;
		}
		if (d == 1){ 
			cout << r << endl;
			d = 0;
		}
	}
	return 0;
}