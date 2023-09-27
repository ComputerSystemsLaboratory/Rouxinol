#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<set>
using namespace std;
int main()
{
	vector<int> b;
	set<int> a;
	int  c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r=0, s, t, u;
	for (int x = 0; 28>x; x++)
	{
		cin >> u;
		a.insert(u);
	}
	set<int>::iterator it = a.begin();
	for (int z = 0; 30>z; z++)
	{
		b.push_back(z);
	}
	d = min(d, e);

	while (it != a.end())
	{
		r++;
		it = a.find(r);
		//a.erase(r-1);
	}
	cout << r << endl;
	it--;
	k = r;
	while (it != a.end())
	{
		it = a.find(k+1);
		k++;

	}
	cout << k << endl;

	return 0;
}