#include <iostream>
using namespace std;

#define MAX 2
int main(void)
{
	int a,b,c;
	int i;
	int cnt = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	for (i=a; i<=b; i++) {
		if ((c%i) == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}

