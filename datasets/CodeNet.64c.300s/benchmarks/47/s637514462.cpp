#include <iostream>
using namespace std;

int main()
{
	int nums[100]={0};
	int max=0;
	for (int n; cin >> n;) {
		nums[n-1]++;
		if (nums[n-1]>max) {
			max=nums[n-1];
		}
	}
	for (int i=0; i<100; i++) {
		if (max==nums[i]) {
			cout << i+1 << endl;
		}
	}
	return 0;
}