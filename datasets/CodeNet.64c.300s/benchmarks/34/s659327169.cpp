#include <iostream>
#include <algorithm>

using namespace std;

int data[110];

void BinaryInsertSort(int i)
{
	int left, mid, right;
	int insert = data[i];
	
	left = 0;
	right = i;
	while (left < right){
		mid = (left + right) / 2;
		if (data[mid] < insert){
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	for (int j = left; j <= i; j++){
		swap(insert, data[j]);
	}
}

int main()
{
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> data[i];
	}
	for (int i = 0; i < n; i++){
		BinaryInsertSort(i);
		for (int j = 0; j < n - 1; j++){
			cout << data[j] << ' ';
		}
		cout << data[n - 1] << endl;
	}
	
	return (0);
}