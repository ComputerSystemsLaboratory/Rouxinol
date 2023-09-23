#include<iostream>
using namespace std;

int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == 0)break;
		int* nums = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> nums[i];
		}
		long int max = -100001; 
		for (int i = 0; i < n; i++) {
			long int tmp = 0;
			for (int j = i; j < n ; j++) {
				tmp += nums[j];
				if (max < tmp)max = tmp;
			}
		}
		cout << max << endl;
	}
}