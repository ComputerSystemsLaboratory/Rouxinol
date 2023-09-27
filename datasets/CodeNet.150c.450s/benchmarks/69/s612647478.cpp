#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> a1, a2;
	int t, i;
	ios::sync_with_stdio(false);
	cin >> t;
	while(t --)
	{
		int x;
		bool flg = 1;
		a1.push_back(0);
		a2.push_back(0);
		for(i = 0; i < 10; i ++)
		{
			cin >> x;
			if(a1.back() < x)	a1.push_back(x);
			else if(a2.back() < x) 	a2.push_back(x);
			else
			{
				flg = 0;
				break;
			}
		}
		for( i ++; i < 10; i ++)	cin >> x;
		flg ? cout << "YES" << endl : cout << "NO" << endl;
		a1.clear();
		a2.clear();
	}
	return 0;
} 
