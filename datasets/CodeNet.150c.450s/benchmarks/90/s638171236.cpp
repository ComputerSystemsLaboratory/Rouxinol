#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int i,j;
	int num[100]={0};
	int a;
	int max=0;
	vector<int> ans;
	
	for(i=0;cin >> a;i++)
	{
		num[a]++;
		
		for(j=0;j<i;j++)
		{
			if(num[j]>max)
			{
				max=num[j];
			}
		}
	}
	
	for(j=0;j<i;j++)
		if(num[j]==max)
			ans.push_back(j);
		vector<int>::iterator it = ans.begin();
	for(;it!=ans.end();++it)
		cout << *it << endl;
}