#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c;
	int cnt = 0;
	cin >> a >> b >> c;
	for (a; a <= b; a++)
	{
		if (c % a == 0)cnt++;
	}
	cout << cnt << endl;
}
