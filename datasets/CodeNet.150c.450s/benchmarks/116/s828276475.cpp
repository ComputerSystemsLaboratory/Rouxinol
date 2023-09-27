#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main()
{
	int n, k, num, ans, sam;
	
	while(cin >> n >> k)
	{
		if(!n && !k) break;
		queue<int> que;
		ans = 0;
		sam = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> num;
			que.push(num);
			sam += num;
			if(que.size() == k )
			{
				if(ans < sam)
				{
					ans = sam;
				}
				sam -= que.front();
				que.pop();
			}
		}
		cout << ans << endl;
	}
}