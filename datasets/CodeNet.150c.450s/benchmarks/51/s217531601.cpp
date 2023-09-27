#include <iostream>
#include <cstring>

using namespace std;

#define REP(i,n) for (int i=0;i<(n);++i)

int main() {
	bool num[30];
	memset(num, 0, sizeof(num));
	REP(i,28) {
		int tmp;
		cin >> tmp;
		num[tmp-1] = true;
	}

	REP(i,30) if (!num[i]) cout << i + 1 << endl;
}