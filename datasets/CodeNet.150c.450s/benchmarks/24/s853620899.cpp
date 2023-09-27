#include <iostream>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

using namespace std;
int n,m;
int main() {
	while(cin >> n >> m && n > 0)
	{
		pair<int, int> pd
		[10000];
		int d,p;
		int y = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> d >> p;
			pd[i] = make_pair(p, d); 
			y += d*p;
		}
		sort(pd,pd+n);
		reverse(pd,pd+n);
		for(int i = 0; i < n; i++)
		{
			if(m < 0) cout << y;
			else{
				int e = min(m, pd[i].second);
				y -= pd[i].first * e;
				m -= e;
			}
		}
		cout << y << endl;
	}
	
}
