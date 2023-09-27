#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <cstring>
using namespace std;

char a[8];
int L;
vector<int> appered;

void init() {
	appered.clear();
}

bool input() {
	scanf("%s %d", a, &L);
	if(!atoi(a) && !L)
		return false;
	return true;
}

void solve() {
	int m, M;

	m = atoi(a);
	appered.push_back(m);

	while(1) {
		for(int i = strlen(a); i < L; i++)
			a[i] = '0';
		a[L] = '\0';

		sort(a, a + L);
		m = atoi(a);

		char tmp[8];
		for(int i = 0; i < L; i++) {
			tmp[L - i - 1] = a[i];
		}
		tmp[L] = '\0';
		M = atoi(tmp);

		for(int i = 0; i < appered.size(); i++) {
			if(appered[i] == M - m) {
				cout << i << " " << M - m << " " << appered.size() - i << endl;
/*
				for(int j = 0; j < appered.size(); j++) {
					cout << "appered[" << j << "] : " << appered[j] << endl;
				}
// */
				return;
			}
		}

		appered.push_back(M - m);
		sprintf(a, "%d", M - m);
	}
}

int main() {
	while(init(), input()) {
		solve();
	}
	return 0;
}