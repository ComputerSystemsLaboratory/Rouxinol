#include<iostream>
#include <vector>
using namespace std;
int ar[12];
vector<int> a,b;
bool dfs(int i)
{
	bool flag = true;
	if(i!=10)
	{
		if(a.empty()||a.back()<ar[i])
		{
			a.push_back(ar[i]);
			flag =  dfs(i+1);
		}
		else if(b.empty()||b.back()<ar[i])
		{
			b.push_back(ar[i]);
			flag = dfs(i+1);
		}
		else flag = false;
	}
	return flag;
}
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		for(int i = 0;i<10;i++)
			cin >> ar[i]; 
		cout<<(dfs(0)?"YES":"NO")<<endl;
		a.clear();b.clear();
	}
 } 