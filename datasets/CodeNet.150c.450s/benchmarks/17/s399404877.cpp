#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int input;
vector<int> nums;

int main() {
	for (int i = 0; i < 5; i++) {
		cin >> input;
		nums.push_back(input);
	}

	sort(nums.begin(), nums.end());
	reverse(nums.begin(), nums.end());

	for (int i = 0; i < 5; i++) {
		cout << nums[i];
		if (i < 4) cout << " ";
	}
	cout << endl;

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/