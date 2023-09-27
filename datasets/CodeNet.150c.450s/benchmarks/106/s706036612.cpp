#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c;
	int output = 0;
	cin >> a >> b >> c;
	if (a == b) {
		if (c%a == 0){
			output = 1;
		}else{
			output = 0;
		}
	}
	else{
		for (int i = a; i <= b; i++) {
		if (c%i == 0) {
			output += 1;
			}
		}
	}
	cout << output << endl;
	cin >> output;
	return 0;
}