
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int a[4];
	int b[4];
	for (int i = 0; i < 4; i++){
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++){
		cin >> b[i];
	}
	int a_sum = 0;
	int b_sum = 0;

	for (int i = 0; i < 4; i++){
		a_sum = a_sum + a[i];
	}
	for (int i = 0; i < 4; i++){
		b_sum = b_sum + b[i];
	}
	if (a_sum < b_sum){
		cout << b_sum << endl;
	}
	else{
		cout << a_sum << endl;
	}
	return 0;
}