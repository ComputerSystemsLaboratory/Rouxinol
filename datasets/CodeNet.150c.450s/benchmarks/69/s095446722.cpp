#include <iostream>
#include <string>
using namespace std;

int value[10];

string dfs(int left,int right,int i)
{
	if(i == 10) return "YES";
	if(left < value[i])
	{
		return dfs(value[i],right,i+1);
	}
	if(right < value[i])
	{
		return dfs(left,value[i],i+1);
	}
	return "NO";
}


int main()
{
	int n;
	cin >> n;
	
	while(n--)
	{
		for(int i=0;i<10;i++)	
		{
			cin >> value[i];	
		}
		cout << dfs(0,0,0) << endl;
	}

	return 0;
}