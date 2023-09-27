#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ELEM(array) (sizeof (array)/sizeof *(array))
#define MAX_N 100
typedef unsigned int UINT;
typedef long long ll;

int fib[50];

void fibfunc()
{

	FOR(i, 2, 50)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

}

int main()
{
	fib[1] = 1;
	fib[0] = 1;
	int n;
	cin >> n;

	fibfunc();

	cout << fib[n] << endl;

	return 0;
}