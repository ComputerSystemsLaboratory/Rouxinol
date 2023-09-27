#include<iostream>
using namespace std;
int main() {
	int cnt[10001] = { 0 };
	int len;
	cin >> len;
	//important point: using len+1 rather than len
	int* arr = new int[len+1];
	int* narr = new int[len+1];
	int max = -1;
	for (int i = 1; i < len + 1; i++) {
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		narr[i] = 0;-
		cnt[arr[i]]++;
	}
	for (int i = 1; i <= max; i++) 
		cnt[i] += cnt[i - 1];
	for (int i = len; i >= 1; i--) {
		narr[cnt[arr[i]]] = arr[i];
		cnt[arr[i]]--;
	}
	for (int i = 1; i <= len; i++)
		if (i!=1)
			cout << " " << narr[i];
		else
			cout << narr[i];
	cout << endl;
	return 0;
}
