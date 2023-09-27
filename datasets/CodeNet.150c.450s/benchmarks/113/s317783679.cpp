#include<iostream>
using namespace std;

int main()
{
	int x,i=0;	
	do{
		cin>>x;
		i++;
		if (x!=0)
			cout<<"Case "<<i<<": "<<x<<endl;
		else
			break;
	} while(i<=10000);
	return 0;
}
