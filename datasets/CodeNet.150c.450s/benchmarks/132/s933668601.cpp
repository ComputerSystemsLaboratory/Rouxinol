#include<iostream>

using namespace std;

int main()
{
	int num,i,j;
	
	for(;;)
	{
		int n[55]={0},p[4];
		cin >> num >> p[0] ;
		if(num==0 && p[0]==0)
			break;
		
		p[1]=p[0];
		for(i=0;;i++)
		{
			if(i==num)
				i-=num;
			if(p[1]!=0)
			{
				n[i]++;
				p[1]--;
			}
			else
			{
				p[1]=n[i];
				n[i]=0;
			}
			if(n[i]==p[0])
				break;
		}
		cout << i << endl;
	}
}