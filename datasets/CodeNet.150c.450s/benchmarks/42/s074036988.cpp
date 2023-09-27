#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
//#include<stdlib.h>
using namespace std;


int main()
{
	int n, q, t;
	string name;
	queue< pair<string, int> > Q;
	
	cin >> n >> q;
	
	for(int i = 0; i < n; i++)
	{
		cin >> name >> t;
		Q.push(make_pair(name,t));
	}
	
	pair<string, int> u;
	int elaps = 0, c;
	
	while(!Q.empty())
	{
		u = Q.front(); Q.pop();
		
		c = min(u.second, q);
		elaps += c;
		if(u.second - c > 0)
		{
			u.second -= c;
			Q.push(u);
		}
		else
		{
			cout << u.first << " " << elaps << endl;
		}
	}
	
//	system("pause");	
	return 0;
}
