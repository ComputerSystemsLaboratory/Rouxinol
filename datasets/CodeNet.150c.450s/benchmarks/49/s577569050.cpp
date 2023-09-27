#include<iostream>

using namespace std;

const int calc(int*, int);


int main(){

	int data[100] = {};
	int count = 0;
	while (true){
		cin >> count;
		if (count == 0)break;
		for (int i = 0; i < count; i++){
			cin >> data[i];
		}

		for (int i = 1; i < count; i++){
			for (int j = i; j > 0; j--){
				if (data[j - 1] > data[j]){
					int tmp = data[j];
					data[j] = data[j - 1];
					data[j - 1] = tmp;
				}
			}
		}
		cout << calc(data, count) << endl;
	}

	return 0;
}

const int calc(int* a, int count){
	if (count <= 0)return 0;

	int ave = 0;

	for (int i = 1; i < count - 1; i++)ave += a[i];
	return ave / (count - 2);
}