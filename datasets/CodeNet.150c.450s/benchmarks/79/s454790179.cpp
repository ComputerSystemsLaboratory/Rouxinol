#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cctype>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
	
int main()
{
	int n,r;
	while(cin >> n >> r,n)
	{
		vector<int> v;
		REP(i,n)
		{
			v.push_back(i+1);
		}
		REP(i,r)
		{
			int p,c;
			cin >> p >> c;
			vector<int> tmp;
			REP(j,c)
			{
				tmp.push_back(v[v.size()-p-j]);
			}
			v.erase(v.end()-p-c+1,v.end()-p+1);
			REP(j,c)
			{
				v.push_back(tmp[tmp.size()-j-1]);
			}
		}
		
		cout << v.back() << endl;
		
	}
	
	return 0;
}
			