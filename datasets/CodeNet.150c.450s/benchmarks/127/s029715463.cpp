#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<utility>
#include<iomanip>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<map>
#include<list>
#include<set>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
#define F first
#define S second
using namespace std;
const int dx[4] = { 0, 1, 0, -1 }, dy[4] = { 1, 0, -1, 0 };
const int dX[8] = { 0, 1, 1, 1, 0, -1, -1, -1 }, dY[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };
struct XY
{
	int x;
	int y;
};
int in()
{
	int x;
	cin >> x;
	return x;
}

/*
(char)'1' - (int)48 = (int)1;
　1111181
*/
////////////////////////////////////////////////////




int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		set<string> ans;
		string a;
		cin >> a;
		for (int i = 1; i < a.size(); i++)
		{
			string b, c;
			for (int l = 0; l < i; l++)b += a[l];
			for (int l = i; l < a.size(); l++)c += a[l];
			
			ans.insert(b + c);
			ans.insert(c + b);
			reverse(b.begin(), b.end());
			ans.insert(b + c);
			ans.insert(c + b);
			reverse(c.begin(), c.end());
			ans.insert(b + c);
			ans.insert(c + b);
			reverse(b.begin(), b.end());
			ans.insert(b + c);
			ans.insert(c + b);

		}
		cout << ans.size() << endl;
	}

}