#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int b = 0, f = 0, r = 0, v = 0;
	int First[3][10] = { 0 }, Second[3][10] = { 0 }, Third[3][10] = { 0 }, Fourth[3][10] = { 0 };
	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		switch (b){
		case 1:
			First[f - 1][r - 1] += v;
			break;
		case 2:
			Second[f - 1][r - 1] += v;
			break;
		case 3:
			Third[f - 1][r - 1] += v;
			break;
		case 4:
			Fourth[f - 1][r - 1] += v;
			break;
		}
	}
	for (int j = 0; j < 3; j++){
		for (int k = 0; k < 10; k++){
			cout << " " << First[j][k];
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int j = 0; j < 3; j++){
		for (int k = 0; k < 10; k++){
			cout << " " << Second[j][k];
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int j = 0; j < 3; j++){
		for (int k = 0; k < 10; k++){
			cout << " " << Third[j][k];
		}
		cout << endl;
	}
	cout << "####################" << endl;
	for (int j = 0; j < 3; j++){
		for (int k = 0; k < 10; k++){
			cout << " " << Fourth[j][k];
		}
		cout << endl;
	}
	return 0;
}