#include<iostream>
using namespace std;
int main() {
	int len, len2;
	cin >> len;
	int* arr = new int[len + 1];
	for (int i = 0; i < len; i++)
		cin >> arr[i];
	cin >> len2;
	int* arr2 = new int[len2];
	for (int i = 0; i < len2; i++)
		cin >> arr2[i];
	int cnt = 0;
	for (int i = 0; i < len2; i++) {
		arr[len] = arr2[i];//set a mark at the end of the array to reduce times of compare
		int j;
		for (j = 0; arr[j] != arr[len]; j++);
		if (j != len) cnt++;//compare out of for-loop reduce the compare times
	}
	cout << cnt << endl;
	return 0;
}
