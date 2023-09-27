#include<iostream>

using namespace std;

int main()
{
	char num[48]={' '};
	
	for(int i=0;i<28;i++)
	{
		int a;
		cin >> a ;
		num[a]='1';
	}
	for(int i=1;i<31;i++)
	{
		if(num[i]!='1')
		{
			cout << i << endl;
		}
	}
}