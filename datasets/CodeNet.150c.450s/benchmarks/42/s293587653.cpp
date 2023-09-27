#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <numeric>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int qt;
	cin >> qt;

	int t = 0;

	queue<pair<string, int>> q;
	for (; n--; )
	{
		int t;
		string s;
		cin >> s >> t;

		q.push(make_pair(s, t));
	}

	for (; !q.empty();)
	{
		pair<string, int> pr;

		pr = q.front();
		q.pop();
		
		int x = min(qt, pr.second);
		t += x;

		if (pr.second - x <= 0)
		{
			cout << pr.first << " " << t << endl;
		}
		else
		{
			q.push(make_pair(pr.first, pr.second - x));
		}
	}
}
