#include<iostream>
using namespace std;

int main() {
	int datas[100] = { 0 };
	int num,biggest_num=0;
	while (cin >> num) {
		datas[num-1]++;
	}
	for (int i = 0; i < 100; i++) {
		if (biggest_num < datas[i]) {
			biggest_num = datas[i];
		}
	}
	for (int i = 0; i < 100; i++) {
		if (biggest_num == datas[i]) {
			cout << i + 1<<endl;
		}
	}
	return 0;
}