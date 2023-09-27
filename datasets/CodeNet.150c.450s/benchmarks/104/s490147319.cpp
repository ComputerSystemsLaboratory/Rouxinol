#include<iostream>
#include <cstdio>

using namespace std;

int main() {

	int no[30] = {0};
	int N,m,a,b;
	char connma;

	cin >> N;
	cin >> m;

	for (int i = 0; i < N; i++) {
		no[i] = i+1;
	}
	
	for (int i = 0; i < m; i++) {
		cin >> a >> connma >> b;
		swap(no[a - 1], no[b - 1]);
	}

	for (int i = 0; i < N; i++) {
		cout << no[i] << endl;
	}

	return 0;
}