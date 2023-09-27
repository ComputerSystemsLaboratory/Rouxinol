#include <iomanip>
#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

pair<int, int> p;
int a[31];

int main()
{
	int w, n, r;
	cin >> w >> n;
	for (int i = 1; i < w + 1; i++)
		a[i] = i;
	for (int i = 0; i < n; i++)
	{
		scanf("%d,%d", &p.first, &p.second);
		r = a[p.first];
		a[p.first] = a[p.second];
		a[p.second] = r;
	}
	for (int i = 1; i < w + 1; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
}