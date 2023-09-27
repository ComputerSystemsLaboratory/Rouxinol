#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <numeric>
#include <utility>

#define rep(i,n)	for(int i = 0;i < n;i++)
#define rep2(i,n)	for(int i = 1;i <= n;i++)
#define each(i,x)	for(auto & i : x)

using namespace std;

int main()
{
	vector<vector<int>> ary;
	while(!feof(stdin))
	{
		vector<int> vec(4);
		rep(i,4)
		{
			cin >> vec[i];
		}
		ary.push_back(vec);
	}
	int len = ary.size()/2;
	rep(i,len)
	{
		vector<int> a = ary[i*2];
		vector<int> b = ary[i*2+1];
		int hit = 0;
		rep(j,4)
		{
			if(a[j] == b[j])
				hit++;
		}
		sort(b.begin(),b.end());
		int blow = -hit;
		rep(j,4)
		{
			auto it = find(b.begin(),b.end(),a[j]);
			if(it != b.end())
			{
				blow++;
			}
		}
		cout << hit << " " << blow << endl;
	}
	return 0;
}