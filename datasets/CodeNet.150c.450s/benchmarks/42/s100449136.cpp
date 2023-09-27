#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <sstream>
using namespace std;
int n, m;
string p[100000];
int a[100000];
queue<int> q;
int c, s, t;
int u;
int main()
{
	cin >> n >> m;
	c=n;
	u=0;
	for(int i=0; i<n; i++)
	{
		cin >> p[i] >> a[i];
		q.push(i);
		q.push(a[i]);
	}
	while(c>0)
	{
		s=q.front();
		q.pop();
		t=q.front();
		q.pop();
		if(t>m)
		{
			t-=m;
			q.push(s);
			q.push(t);
			u+=m;
		}
		else
		{
			u+=t;
			cout << p[s] << " " << u << endl;
			c-=1;
		}
	}
	return 0;
}