#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num[2] = {0};
		int flag = 1;
		for (int j = 0; j < 10; j++) {
			int k;
			cin >> k;
			if (num[0] < k && num[1] < k) {
				num[num[0] < num[1]] = k;
			}
			else if (num[0] < k && num[1] >= k) {
				num[0] = k;
			}
			else if (num[0] >= k && num[1] < k) {
				num[1] = k;
			}
			else {
				flag = 0;
			}
		}
		if (flag) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}