#include <iostream>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <sstream>
using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		if (a < b) swap(a, b);
		int A = a; int B = b;
		while (1)
		{
			a -= (a / b)*b;
			if (a == 0) break;
			swap(a, b);
		}
		cout << b << " " << A / b*B << endl;
	}
	return 0;
}