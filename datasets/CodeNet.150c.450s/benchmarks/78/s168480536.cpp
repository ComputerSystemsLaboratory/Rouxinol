#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int cnt1[1000100], cnt2[1000100];

int main() {
	vector< int > nums;
	
	int a = 2, c = 1, num = 1;
	
	while (num < 1000100) {
		nums.push_back(num);
		c += a;
		++a;
		num += c;
	}
	
	for_(j,0,(int)nums.size()) {
		cnt1[nums[j]] = 1;
		if (nums[j] % 2) cnt2[nums[j]] = 1;
	}
	
	for_(i,1,1000100) {
		for_(j,0,(int)nums.size()) {
			if (i - nums[j] <= 0) break;
			
			if (cnt1[i] == 0) cnt1[i] = cnt1[i - nums[j]] + 1;
			else cnt1[i] = min(cnt1[i], cnt1[i - nums[j]] + 1);
			
			if (nums[j] % 2) {
				if (cnt2[i] == 0) cnt2[i] = cnt2[i - nums[j]] + 1;
				else cnt2[i] = min(cnt2[i], cnt2[i - nums[j]] + 1);
			}
		}
	}
	
	int n;
	while (cin >> n, n) {
		cout << cnt1[n] << " " << cnt2[n] << endl;
	}
}