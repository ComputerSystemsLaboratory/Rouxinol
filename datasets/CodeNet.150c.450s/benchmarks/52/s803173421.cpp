#include <iostream>
using namespace std;
#define N 1000

int main()
{
	int x;
	int stack[N];
	int n = 0;
	
	while (cin >> x) {
		if (x != 0) {
			stack[n] = x;
			n++;
		} else {
			cout << stack[n - 1] << "\n";
			n--;
		}
	}
	return 0;
}