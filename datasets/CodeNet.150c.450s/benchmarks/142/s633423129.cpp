#include <iostream>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int num[200010];
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		if(i>=k)
		{
			if(num[i]>num[i-k])	
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}		
	}
	return 0;
}