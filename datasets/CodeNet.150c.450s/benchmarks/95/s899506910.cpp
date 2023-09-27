#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string act;
	int status[2];
	int pos=0;
	int count=0;
	status[0] =0;
	status[1] =0;
	/*0 jimen 1 dai*/
	cin >> n;
	while(n)
	{
	pos = 0;
	count =0;
	status[0] = 0;
	status[1] = 0;
	for(int i=0;i<n;++i)
	{
		cin >> act;
		if(act=="lu") status[0]=1;
		else if(act=="ru") status[1]=1;
		else if(act=="ld") status[0]=0;
		else if(act=="rd") status[1]=0;
		if(pos==0 && status[0]==1 && status[1]==1)
		{
			++count;
			pos=1;
		}
		else if(pos==1 && status[0]==0 && status[1]==0)
		{
			++count;
			pos=0;
		}
	}
	cout << count << endl;
	cin >> n;
	}
}
	
	
	