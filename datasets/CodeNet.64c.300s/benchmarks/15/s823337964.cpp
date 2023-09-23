#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int n, *nums, counter = 0;

	cin >> n;
	nums = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) cin >> nums[i];
	
	for (int i = 0; i < n - 1; i++)
	{
		int mini = i;
		for (int j = i + 1; j < n; j++)
			if (nums[mini] > nums[j]) mini = j;
			
		if (mini != i) {
			int tmp = nums[i];
			nums[i] = nums[mini];
			nums[mini] = tmp;
			counter++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << nums[i];
		if (i != n - 1) cout << " ";
	}

	cout << endl << counter << endl;

	return 0;
}