#include <stdio.h>
#include <iostream>
#include <cstdio>
using namespace std;
int x, c=0;
void dfs(int pos) {
	if (pos == 1) {
		c++;
		return;
	}else if (pos == 2) {
		c = c + 2;
		return;
	}
	else if (pos == 3) {
		c = c + 4;
		return;
	}
	else {
		dfs(pos - 1);
		dfs(pos - 2);
		dfs(pos - 3);
	}


}

int main() {
	while (1) {
	int	days = 0, years = 0;
	c = 0;
	cin >> x;
	if (x == 0) {
		break;
	}
	dfs(x);
	days = c / 10;
	if (c % 10 != 0) {
		days++;
	}
	years = days / 365;
	if (days % 365 != 0) {
		years++;
	}
	cout << years << endl;
	}
	

}