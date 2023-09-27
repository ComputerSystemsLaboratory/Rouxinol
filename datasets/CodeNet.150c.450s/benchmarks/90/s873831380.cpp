#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
int main() {
	vector<int> s,t;
	int a,i,j,k,l,len;
	int max = 0;
	for (i = 0; i <= 100; i++) {
		s.push_back(0);
	}
	while (cin >> a) {
		s[a] += 1;
	}
	for (j = 0; j <= 100; j++) {
		if (max < s[j]) {
			max = s[j];
		}
	}
	for (k = 0; k <= 100; k++) {
		if (s[k] == max) {
			t.push_back(k);
		}
	}
	len = t.size();
	for (l = 0; l < len; l++) {
		cout << t[l] << endl;
	}
	return 0;
}