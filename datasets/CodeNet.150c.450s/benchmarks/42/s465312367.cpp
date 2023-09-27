#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
#include <stack>
#include <queue>
using namespace std;
#define len(n) (int)n.length()
#define dump cout
#define pb push_back
#define ll long long

class Task
{
public:
	string name;
	int time;
};

int main()
{
	ios::sync_with_stdio(false);
		int n, q;
	cin >> n >> q;
	
	queue<Task> que;
	for (int i = 0; i < n; i++) {
		Task t;
	    cin >> t.name >> t.time;
		que.push(t);
	}
	
	int elapsed = 0;
	while (!que.empty())
	{
		Task t = que.front();
		que.pop();
		
		elapsed += min(t.time, q);
		t.time -= q;

		if (t.time <= 0)
		{
			cout << t.name << " " << elapsed << endl;
		}
		else
		{
			que.push(t);
		}
	}
	
	return 0;
}