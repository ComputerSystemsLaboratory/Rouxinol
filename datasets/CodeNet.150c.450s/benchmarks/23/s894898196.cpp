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

vector<int> v;
int a[20];
int m;
int n, q;

void dp(int cnt, int value)
{
	if (cnt >= n) {
		v.push_back(value);
		return;
	}
	dp(cnt + 1, value + a[cnt]);
	dp(cnt + 1, value);
}

int main(){
	
	cin >> n;
	int n_1 = 1, n_2 = 1;
	if (n < 2) {
		cout << "1" << endl;
	}
	else {
		for (int i = 2; i < n; i++) {
			n_1 += n_2;
			swap(n_1, n_2);
		}
		cout << n_1 + n_2 << endl;
	}

	return 0;
}