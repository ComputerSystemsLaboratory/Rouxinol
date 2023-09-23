#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;
int check(int x)
{
	if (x == 2)return 1;
	if (x <2||x%2==0)return 0;
	for (int i = 3; i <= sqrt(x); i+=2)
	{
		if (x%i == 0)return 0;
	}
	return 1;
}
int main()
{
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		ans += check(a);
	}
	cout << ans << endl;

}