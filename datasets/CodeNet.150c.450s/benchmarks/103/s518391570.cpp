#include <iostream>
using namespace std;

int f(int n, int s, int x)
{
	if (n == 0) {
		if (s == 0) return 1;
		else return 0;
	}
	if (x >= 10) {
		return 0;
	}
	return f(n - 1, s - x, x + 1) + f(n, s, x + 1);
}

int main()
{
	int n, s;
	
	while (1) {
		cin >> n >> s;
		
		if (n == 0 && s == 0) break;
		
		cout << f(n, s, 0) << endl;
	}
	
	return 0;
}