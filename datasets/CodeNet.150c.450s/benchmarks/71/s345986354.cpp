#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
int ch;
int solute(int k)
{
	int num=0;
		for(int a=0;a<10;a++)
		for(int b=0;b<10;b++)
			for(int c=0;c<10;c++)
				for(int d=0;d<10;d++)
				{
					if(a+b+c+d==k)
						num++;
				}
		return num;
}
int main()
{
	while(cin>>ch)
	{
		ans.push_back(ch);
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<solute(ans[i])<<endl;
	}
    
	
	
	return 0;
}