#include<iostream>
using namespace std;
int main() {
	long max = -1000000001, min, time;
	cin >> time;
	int code[200000];
	for (int i= 0; i < time; ++i){
		cin >> code[i];
	}
	min = code[0];
	for (int i = 1; i < time; ++i) {
		if (max < code[i] - min) {
			max = code[i] - min;
		}
		if (min > code[i]) {
			min = code[i];
		}
	}
	cout << max << endl;
	return 0;
}