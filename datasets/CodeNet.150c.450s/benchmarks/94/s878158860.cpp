#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	int n, *nums,tmp,counter = 0;
	cin >> n;

	nums = (int *)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j >= 1 ; j--)
		{
			
			if (nums[j] < nums[j-1]) {
				tmp = nums[j];
				nums[j] = nums[j-1];
				nums[j-1] = tmp;
				counter++;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << nums[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}

	cout << counter << endl;
	return 0;
}