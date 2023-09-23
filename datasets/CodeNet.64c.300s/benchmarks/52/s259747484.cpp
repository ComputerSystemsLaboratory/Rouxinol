#include <iostream>
using namespace std;

int n,k,count;

void dfs(int i,int sum,int num)
{
	if(num == n)
	{
		if(sum == k)
		{
			count++;
		}
		return;
	}

	if(i == 10)
	{
		return;
	}
	
	dfs(i+1,sum,num);
	dfs(i+1,sum+i,num+1);
}
int main()
{
	while(cin >> n >> k)
	{
		if(n == 0 && k == 0) break;

		count = 0;
		dfs(0,0,0);
		cout << count << endl;

	}
	return 0;
}