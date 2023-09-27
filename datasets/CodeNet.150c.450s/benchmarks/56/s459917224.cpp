#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int *array;
	array = new int[n];
	int x = 0;
	for (int i = 0; i < n; i++){
		cin >> x;
		array[i] = x;
	}
	int min = array[0], max = array[0];
	long long sum = array[0];
	for (int j = 1; j < n; j++){
		if (min>array[j]) min = array[j];
		if (max < array[j])  max = array[j];
		sum += array[j];
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}