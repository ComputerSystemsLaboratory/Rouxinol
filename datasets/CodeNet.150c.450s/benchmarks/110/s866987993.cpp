#include<iostream>
#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;
int mp[1002][1002],mp2[1002][1002];
int main()
{
	char a;
	int t, j, h, w, k, i;
	pair<int, int> s, m[10];
	queue<pair<int, int> > u;
	queue<int> e;
	cin >> h >> w >> k;
	for (i = 0; i <= h; i++)
	{
		mp[i][0] = 1;
		mp[i][w + 1] = 1;
		mp2[i][0] = 1;
		mp2[i][w + 1] = 1;

	}
	for (i = 0; i <= w; i++)
	{
		mp[0][i] = 1;
		mp[h + 1][i] = 1;
		mp2[0][i] = 1;
		mp2[h + 1][i] = 1;
	}
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			cin >> a;
			if (a == 'X')
			{
				mp[i][j] = 1;
			}
			if (a == 'S')
			{
				mp[i][j] = 10;
				s.first = i;
				s.second = j;
			}
			if (a == '1')
			{
				mp[i][j] = 11;
				m[1].first = i;
				m[1].second = j;
			}
			if (a == '2')
			{
				mp[i][j] = 12;
				m[2].first = i;
				m[2].second = j;
			}
			if (a == '3')
			{
				mp[i][j] = 13;
				m[3].first = i;
				m[3].second = j;
			}
			if (a == '4')
			{
				mp[i][j] = 14;
				m[4].first = i;
				m[4].second = j;
			}
			if (a == '5')
			{
				mp[i][j] = 15;
				m[5].first = i;
				m[5].second = j;
			}
			if (a == '6')
			{
				mp[i][j] = 16;
				m[6].first = i;
				m[6].second = j;
			}
			if (a == '7')
			{
				mp[i][j] = 17;
				m[7].first = i;
				m[7].second = j;
			}
			if (a == '8')
			{
				mp[i][j] = 18;
				m[8].first = i;
				m[8].second = j;
			}
			if (a == '9')
			{
				mp[i][j] = 19;
				m[9].first = i;
				m[9].second = j;
			}
		}
	}
	t = 0;
	e.push(0);
	i = 1;
	u.push(s);
	while (i <= k)
	{
		t = e.front();
		e.pop();
		s = u.front();
		u.pop();
		if (s == m[i])
		{
			i++;
			memset(mp2, 0, sizeof(mp2));
			while (!u.empty())
			{
				u.pop();
			}
			while (!e.empty())
			{
				e.pop();
			}
			e.push(t);
			u.push(s);
			continue;
		}
		if (mp[s.first + 1][s.second] != 1 && mp2[s.first + 1][s.second] != 1)
		{
			mp2[s.first + 1][s.second] = 1;
			s.first++;
			u.push(s);
			t++;
			e.push(t);
			t--;
			s.first--;
		}
		if (mp[s.first][s.second + 1] != 1 && mp2[s.first][s.second + 1] != 1)
		{
			mp2[s.first][s.second + 1] = 1;
			s.second++;
			u.push(s);
			t++;
			e.push(t);
			t--;
			s.second--;
		}
		if (mp[s.first - 1][s.second] != 1 && mp2[s.first - 1][s.second] != 1)
		{
			mp2[s.first - 1][s.second] = 1;
			s.first--;
			u.push(s);
			t++;
			e.push(t);
			t--;
			s.first++;
		}
		if (mp[s.first][s.second - 1] != 1 && mp2[s.first][s.second - 1] != 1)
		{
			mp2[s.first][s.second - 1] = 1;
			s.second--;
			u.push(s);
			t++;
			e.push(t);
			t--;
			s.second++;
		}
	}
	cout << t << endl;
	return 0;
}