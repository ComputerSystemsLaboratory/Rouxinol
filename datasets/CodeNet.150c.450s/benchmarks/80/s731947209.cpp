#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main()
{
	int a, b, c, d, e, i, j, k, l, m, n, o, p, q, r;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> i;
	cin >> j;
	cin >> k;
	d += a;
	d += b;
	d += c;
	k += e;
	k += i;
	k += j;
	cout << max(k, d) << endl;
	return 0;
}