#include<iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n;
	cin >>n;
	long int array[n];
	long int max, min, sum = 0;
	int temp;
	cin >> temp;
	max = min = array[0] = temp;
	for (int i = 1; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n; i++) {
		if (array[i] > max) max = array[i];
		if(array[i] < min) min = array[i];
		sum += array[i];
	}
	cout << min << " " << max << " " << sum << endl;
	//printf("%d %d %d\n", min, max, sum);
}