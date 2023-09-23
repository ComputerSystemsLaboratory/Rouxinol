#include<iostream>
using namespace std;

int main()
{
	int highth[10] = { };
	int buf;

	for (int i = 0; i < 10; i++){
		cin >> highth[i];
	}

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (highth[j] < highth[j + 1]){
				buf = highth[j + 1];
				highth[j + 1] = highth[j];
				highth[j] = buf;
			}
		}
	}

	cout << highth[0] << endl;
	cout << highth[1] << endl;
	cout << highth[2] << endl;
}