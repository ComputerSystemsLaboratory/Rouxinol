#include<iostream>
using namespace std;

void CHECK_NUM(int, int);
void INCLUDE3(int, int, int);
void END_CHECK_NUM(int, int);

int main()
{
	int n;
	cin >> n;

	CHECK_NUM(n, 1);

	return 0;
}

void CHECK_NUM(int n, int i)
{
	int x = i;
	if (x % 3 == 0) {
		cout << " " << i;
		END_CHECK_NUM(n, i);
	}
	INCLUDE3(x, i,n);
}

void INCLUDE3(int x, int i,int n)
{
	if (x % 10 == 3) {
		cout << " " << i;
		END_CHECK_NUM(n, i);
	}
	x /= 10;
	if (x) {
		INCLUDE3(x, i, n);
	}
	END_CHECK_NUM(n, i);
}

void END_CHECK_NUM(int n, int i)
{
	if (++i <= n) {
		CHECK_NUM(n, i);
	}
	cout << endl;

	exit(EXIT_SUCCESS);
}
