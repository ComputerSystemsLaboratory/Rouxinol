#include<iostream>
#define MAX 200002
using namespace std;
typedef long long LL;
int n;
int nums[MAX];
int L[MAX / 2 + 2];
int R[MAX / 2 + 2];
LL mergeSort(int left,int right) {
	if (left >= right) {
		return 0;
	}
	int middle = (left + right) / 2;
	LL inverNum1 = mergeSort(left, middle);
	LL inverNum2 = mergeSort(middle + 1, right);
	LL rinverNum = inverNum1 + inverNum2;

	int len1 = middle - left + 1;
	int len2 = right - middle;
	int len = right - left + 1;
	//拷贝
	int j = 0;
	for (int i = left; i <= middle; i++,j++) {
		L[j] = nums[i];
	}
	j = 0;
	for (int i = middle+1; i <= right; i++, j++) {
		R[j] = nums[i];
	}

	//归并
	int i = 0,k=left;
	j = 0;
	while (i<len1 && j<len2) {
		if (L[i] <= R[j]) {
			nums[k] = L[i];
			i++;
			k++;
		}
		else if (R[j] < L[i]) {
			nums[k] = R[j];
			rinverNum += len1 - i;
			j++;
			k++;
		}
	}
	if (i < len1) {
		for (i; i < len1; i++, k++) {
			nums[k] = L[i];
		}
	}
	else if (j < len2) {
		for (j; j < len2; j++, k++) {
			nums[k] = R[j];
		}
	}
	return rinverNum;
}
int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	LL inverNum = mergeSort(0,n-1);
	cout << inverNum << endl;

	/*for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}*/
}
