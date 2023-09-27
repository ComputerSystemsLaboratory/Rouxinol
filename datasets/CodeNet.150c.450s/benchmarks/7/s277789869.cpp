#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a[10];
	int out[3] = {0, 0, 0};
	for (int i = 0; i < 10; ++i)	cin >> a[i];
	
	for (int i = 0; i < 10; ++i){
		if (a[i] >= out[0]){
			out[2] = out[1];
			out[1] = out[0];
			out[0] = a[i];
		}
		else if (a[i] >= out[1]){
			out[2] = out[1];
			out[1] = a[i];
		}
		else if (a[i] >= out[2]){
			out[2] = a[i];
		}
	}

	for (int i = 0; i < 3; ++i)	cout << out[i] << endl;

	return 0;
}