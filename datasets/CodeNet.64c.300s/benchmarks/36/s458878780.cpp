#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int* n;
	n = new int[3];
	for ( int i = 0; i < 3; i++)	cin >> n[i];
	sort(n, n + 3);

	cout << n[0] << " " << n[1] << " " << n[2] << endl;

	return 0;
}