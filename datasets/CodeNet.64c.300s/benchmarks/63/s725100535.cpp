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
	int a, b;
	while (std::cin >> a >> b) {
		int tmp_a = a, tmp_b = b;
		while (a % b != 0) {
			int tmp = a % b;
			a = b;
			b = tmp;
		}
		cout << b << " " << (tmp_a / b) * (tmp_b / b) * b << endl;
	}
	return 0;
}