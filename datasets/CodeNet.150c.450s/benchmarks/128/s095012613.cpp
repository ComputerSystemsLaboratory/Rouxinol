#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
	if (b == 0)return a;
	else return gcd(b, a%b);
}

int main()
{
	string str;
	cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		cout << str[i];
	}
	cout << endl;

	return 0;
}