#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <set>
#include <map>
//#include <bits/stdc++.h>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long
#define bl bool
#define nn printf("\n");
#define mod 1000000007

using namespace std;

struct inout { int cri; string name; };
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N; cin >> N;
	vector<inout> dat(N + 2);
	rep(i, N) 
	{
		cin >> dat[i].name; 
		dat[i].cri = 0;
	}
	int M; cin >> M;
	int l = 0;
	rep(i, M)
	{
		string tar; cin >> tar;
		int k = 0;
		rep(j, N)
		{
			if (dat[j].name == tar)
			{
				if(l == 0)
				{
					cout << "Opened by " << dat[j].name << "\n";
					l = 1;
					break;
				}
				else if (l == 1)
				{
					cout << "Closed by " << dat[j].name << "\n";
					l = 0;
					break;
				}
			}
			k++;
			if (k > N - 1) { cout << "Unknown " << tar << "\n"; }
		}
	}

	return 0;
}