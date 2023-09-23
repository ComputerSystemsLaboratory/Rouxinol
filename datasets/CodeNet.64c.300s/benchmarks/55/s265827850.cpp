#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i>0;i++)
	{
		int x;
		cin>>x;
		if(x==0)
		{
			break;
		}
		cout<<"Case"<<" "<<i<<":"<<" "<<x<<endl;
	}
		return 0;
}