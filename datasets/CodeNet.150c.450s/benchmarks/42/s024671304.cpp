#include<iostream>
#include<stack>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<map>
#include<vector>
#include<cmath>
#include<algorithm>
#include<queue>
using namespace std;

struct work
{
	int tim;
	string name;
};
int main()
{
	queue<work> k;
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		work t;
		cin >> t.name >> t.tim;
		k.push(t);
	}
	int ans = 0;
	while (!k.empty())
	{
		work t=k.front();
		t.tim -= q;
		if (t.tim <= 0)
		{
			ans += q;
			ans += t.tim;
			cout << t.name << " " << ans << endl;
			k.pop();
		}
		else
		{
			ans += q;
			k.pop();
			k.push(t);
		}
	}

}



/*
stack<int> X[3];
int n, m;
int ans;
int owa;

void aho(int a, int b)
{
	X[b].push(X[a].top());
	X[a].pop();
	return;
}
int k1[4] = { 0, 1, 1, 2 };
int k2[4] = { 1, 0, 2, 1 };
int check(int now,int mae)
{
	
	if (now > owa)return m + 2;
	if (X[1].empty())
	{
		if (X[0].empty() || X[2].empty())
		{
			owa = now + 1;
			//cout << now << endl;
			return now;
		}
	}
	if (now == m )
	{
		return m+2;
	}
	int ans = m+1;
	for (int i = 0; i < 4; i++)
	{
		if (mae == 0 && i == 1)continue;
		if (mae == 1 && i == 0)continue;
		if (mae == 2 && i == 3)continue;
		if (mae == 3 && i == 2)continue;
		if (X[k1[i]].empty())continue;
		if (X[k2[i]].empty());
		else 
		if (X[k1[i]].top() <= X[k2[i]].top())continue;
		aho(k1[i], k2[i]);
		ans=min(check(now + 1,i),ans);
		aho(k2[i], k1[i]);
	}
	return ans;
	

}

int main()
{
	while (1){
		cin >> n >> m;
		if (n == 0)
			if (m == 0)
				break;
		for (int i = 0; i < 3; i++)
			while (!X[i].empty())X[i].pop();
		ans = m + 1;
		owa = m;
		for (int i = 0; i < 3; i++)
		{
			int g;
			cin >> g;
			for (int I = 0; I < g; I++)
			{
				int s; cin >> s;
				X[i].push(s);
			}
		}
		int g = check(0,-1);
		if (g > m)
		{
			g = -1;
		}
		cout << g << endl;
	}
	
}
*/