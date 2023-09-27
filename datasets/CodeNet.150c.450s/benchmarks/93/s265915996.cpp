#include<iostream>
#include<cstdio>
using namespace std;
struct Card {
	char suit;
	int val;
};
int partition(Card* arr, int left, int right) {
	int x = arr[right].val;
	int i, j;
	for (i = left - 1, j = left;j < right;j++) {
		if (arr[j].val <= x)
			swap(arr[++i], arr[j]);
	}
	swap(arr[++i], arr[right]);
	return i;
}
void quickSort(Card* arr, int left, int right) {
	if(left<right){
		int mid = partition(arr, left, right);
		quickSort(arr, left, mid-1);
		quickSort(arr, mid+1, right);
	}
}
void merge(Card* arr, int left, int mid, int right) {
	int len1 = mid - left + 1;
	int len2 = right - mid;
	Card* tempL = new Card[len1];
	Card* tempR = new Card[len2];
	for (int i = 0; i < len1; i++)tempL[i] = arr[left + i];
	for (int i = 0; i < len2; i++)tempR[i] = arr[mid + 1 + i];
	int i = 0, j = 0;
	for (int k = left; k <= right; k++) {
		if (i < len1 && (j >= len2 || tempL[i].val <= tempR[j].val))
			arr[k] = tempL[i++];
		else
			arr[k] = tempR[j++];
	}
}
void mergeSort(Card* arr, int left, int right) {
	int mid = (left + right) / 2;
	if (left < mid) {
		mergeSort(arr, left, mid);
		mergeSort(arr, mid+1, right);
	}
	merge(arr, left, mid, right);
}
int main() {
	int len;
	cin >> len;
	/*int* arr = new int[len];
	for (int i = 0;i < len;i++)
		cin >> arr[i];*/
	/*int p = partition(arr, 0, len - 1);
	for (int i = 0;i < len;i++) {
		if (i) {
			if (i != p)
				cout << " " << arr[i];
			else
				printf(" [%d]", arr[i]);
		}
		else
			if (i != p)
				cout << arr[i];
			else
				printf("[%d]", arr[i]);
	}
	cout << endl;*/
	Card* arr = new Card[len];
	Card* judge = new Card[len];
	for (int i = 0; i < len; i++) {
		cin >> arr[i].suit >> arr[i].val;
		judge[i] = arr[i];
	}
	quickSort(arr, 0, len - 1);
	mergeSort(judge, 0, len - 1);
	int isStable = 1;
	for (int i = 0; i < len; i++) {
		if (arr[i].suit != judge[i].suit) {
			cout << "Not stable\n";
			isStable = 0;
			break;
		}
	}
	if (isStable)
		cout << "Stable\n";
	for (int i = 0; i < len; i++)
		cout << arr[i].suit << " " << arr[i].val << endl;
	delete[]arr;
	return 0;
 }
