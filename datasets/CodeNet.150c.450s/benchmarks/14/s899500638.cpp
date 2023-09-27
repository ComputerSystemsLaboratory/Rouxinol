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

void call(int n) {
	int i = 1;
	
	while (true) {
		int x = i;
		bool flag = true;
		if (x % 3 == 0) {
			cout << " " << i;
			flag = false;
		}
		while (flag) {
			if (x % 10 == 3) {
				cout << " " << i;
				break;
			}
			x /= 10;
			if (!x) {
				break;
			}
		}
		if (++i > n) {
			break;
		}
	}
	cout << endl;
}

int main(int argc, char **argv){
	int n;
	cin >> n;
	call(n);
	return 0;
}