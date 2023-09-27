#include <iostream>
#include <cstdio>
using namespace std;

int n, c[5];
string s;
int main() {
	cin >> n;
	while(n--) {
		cin >> s;
		if(s=="AC") c[0]++;
		else if(s=="WA") c[1]++;
		else if(s=="TLE") c[2]++;
		else c[3]++;
	}
	printf("AC x %d\n", c[0]);
	printf("WA x %d\n", c[1]);
	printf("TLE x %d\n", c[2]);
	printf("RE x %d\n", c[3]);
	return 0;
}