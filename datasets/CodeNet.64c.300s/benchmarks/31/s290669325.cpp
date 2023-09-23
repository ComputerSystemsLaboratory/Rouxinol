#include <iostream>

using namespace std;

int main()
{
	bool stonepro[30]={false};
	
	int j;
	for(int i=0;i<28;i++)
	{
		cin>>j;
		stonepro[j-1]=true;
	}
	
	for(int i=0;i<30;i++)
	{
		if(stonepro[i]==false)
		{
			cout<<i+1<<"\n";
		}
	}
	
	return 0;
}