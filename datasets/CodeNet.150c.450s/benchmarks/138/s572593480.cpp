#include<iostream>
#include<algorithm>

using namespace std;

int solve(int x, int y) {
	int a, b;
	a = max(x, y);
	b = min(x, y);
	if (a%b > 0)return solve(a%b, b);
	else return b;
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << solve(x, y) << endl;
	return 0;
}