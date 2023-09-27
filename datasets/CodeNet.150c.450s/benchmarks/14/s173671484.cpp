#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		int p=i;
		if(p%3==0)
		{
			cout<<" "<<i;
		}

		else if(p%10==3)
			{
				cout<<" "<<i;
			}
		else
		{
			while(p/=10)
			{
				if(p%10==3)
				{
					cout<<" "<<i;
					break;
				}
			}
		}
	}
cout<<endl;
return 0;
}


