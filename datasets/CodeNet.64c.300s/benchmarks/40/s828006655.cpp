#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	for (char c; (c = getchar()) != '\n';) {
		if (c >= 65 && c <= 90)
			cout << (char)(c + 32);
		else if (c >= 97 && c <= 122)
			cout << (char)(c - 32);
		else
			cout << c;
	}
	cout << endl;
	return 0;
}