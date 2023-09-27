#include <iostream>
using namespace std;
#define A

#ifdef A
int main(void)
{
	int a, b;
	cin >> a >> b;
	if (a == b)
		cout << "a == b" << endl;
	else if (a < b)
		cout << "a < b" << endl;
	else
		cout << "a > b" << endl;

	return 0;
}
#endif
#ifdef B
int main()
{
	int A;
	cin >> A;
	cout << A*A*A << endl;
	return 0;
}
#endif
#ifdef C
int main()
{
	int a, b;
	cin >> a >> b;
	cout << a *b << " " << 2 * (a + b) << endl;
	return 0;
}
#endif
#ifdef D
int main()
{
	int S;
	cin >> S;
	int h = S / 3600, m = S / 60 % 60, s = S % 60;

	cout << h << ":" << m << ":" << s << endl;

	return 0;
}
#endif