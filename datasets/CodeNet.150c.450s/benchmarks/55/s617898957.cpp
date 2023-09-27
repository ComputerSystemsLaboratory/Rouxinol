#include<iostream>
using namespace std;
int main(){
	char x[1000][1001] = { "a" };
	int check;
	int a[1000] = {};
	for (int i = 0; i < 1000; i++){
		cin >> x[i];
		if (x[i][0] == '0'){
			break;
		}
		for (int i2 = 0; i2 < 1001; i2++){
			if (x[i][i2] != '\0' && x[i][i2] != 'a'){
				a[i] += x[i][i2] - '0';
			}
		}
		check = i;
	}
	for (int i = 0; i <= check; i++){
		cout << a[i] << endl;
	}
	return 0;
}