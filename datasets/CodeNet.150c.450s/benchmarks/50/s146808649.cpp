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

using namespace std;

int main(int argc, char **argv){
	int n;
	int kane[] = { 500, 100, 50, 10, 5, 1 };
	int count;
	while (cin >> n && n != 0) {
		count = 0;
		n = 1000 - n;
		for (int i = 0; i < 6; i++) {
			count += (n / kane[i]);
			n %= kane[i];
		}
		cout << count << endl;
	}
	return 0;
}