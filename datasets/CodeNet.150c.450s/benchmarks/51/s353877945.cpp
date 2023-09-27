#include<iostream>

using namespace std;

int main()
{
	int n[32] = {}, m[32]={};
	for (int i = 1; i <= 29; i++) {
		cin >> m[i];
		n[m[i]] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (n[i] == 0) {
			if (i == 0) continue;
			cout << i << endl;
		}
	}


	return 0;
}