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

int main(int argc, char **argv){
	int a, b, c;
	int cnt = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++) {
		if (c % i == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}