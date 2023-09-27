#include <iostream>
using namespace std;
int a[22], b[210];
int n, q;
// 选择第i个元素后面的元素, 能组成和为m 
bool solve(int i, int m)
{
	if(m == 0)	return true;
	if(i >= n)	return false;
	
	return solve(i + 1, m) || solve(i + 1, m - a[i]);
}
int main()
{
	cin >> n;
	for(int i = 0; i < n; ++ i)
		cin >> a[i];
	cin >> q;
	for(int i = 0; i < q; ++ i)
	{
		cin >> b[i];
		if(solve(0, b[i]))	cout << "yes" << endl;
		else	cout << "no" << endl;
	}
	
	return 0;
}
