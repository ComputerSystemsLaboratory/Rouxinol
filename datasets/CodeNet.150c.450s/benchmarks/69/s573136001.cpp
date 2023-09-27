#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int N,i,a,j,s,t,u;
	cin >> N;
	for (i = 0; i < N; i++) {
		s = 0;
		t = 0;
		u = 0;
		for (j = 0; j < 10; j++) {
			cin >> a;
			if (a > s) {
				s = a;
			}
			else if (a<s&&a>t) {
				t = a;
			}
			else if (a < s&&a < t) {
				u = 1;
			}
		}
		if (u == 0) {
			cout << "YES" << endl;
		}
		else if (u == 1) {
			cout << "NO" << endl;
		}
	}
	return 0;
}