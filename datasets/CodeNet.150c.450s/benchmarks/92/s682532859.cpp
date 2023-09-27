#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a = 0, b = 0;
	while (cin >> a >> b)
	{
		int sum = a + b;
		string str;
		str = Num2Str(sum);
		printf("%d\n", str.size());
	}
	return 0;
}