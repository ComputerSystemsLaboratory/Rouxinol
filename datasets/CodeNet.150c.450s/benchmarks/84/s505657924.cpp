#include<iostream>
using namespace std;
long long cnt = 0;
void merge(int* arr, int left, int mid, int right) {
	int len1 = mid - left + 1;
	int len2 = right - mid;
	int* tempL = new int[len1];
	int* tempR = new int[len2];
	for (int i = 0; i < len1; i++)tempL[i] = arr[left + i];
	for (int i = 0; i < len2; i++)tempR[i] = arr[mid+1 + i];
	int i = 0, j = 0;
	for (int k = left; k <= right; k++)
		if (i < len1 && (j >= len2 || tempL[i] <= tempR[j]))
			arr[k] = tempL[i++];
		else {
			arr[k] = tempR[j++];
			cnt += (len1 - i);
		}
	delete[]tempL;
	delete[]tempR;
}
void mergeSort(int* arr, int left, int right) {
	int mid = (left + right) / 2;
	if (left < mid) {
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
	}
	merge(arr, left, mid, right);
}
int main() {
	int len;
	cin >> len;
	int* arr = new int[len];
	for (int i = 0; i < len; i++)
		cin >> arr[i];
	mergeSort(arr, 0, len - 1);
	cout << cnt << endl;
	delete[]arr;
	return 0;
}
