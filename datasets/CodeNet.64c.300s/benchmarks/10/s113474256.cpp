#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i>=0;i++)
	{
		int x,y;
		cin>>x>>y;
		if(x==0&&y==0)
		{
			break;
		}
		else if(x>y)
		{
			cout<<y<<" "<<x<<endl;
		}
		else
		{
			cout<<x<<" "<<y<<endl;
		}
	}
		return 0;
}