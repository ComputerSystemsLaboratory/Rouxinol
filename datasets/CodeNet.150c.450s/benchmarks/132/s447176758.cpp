#include<iostream>
#include<string>
#include<cmath>

#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int n,p;
	while(cin>>n>>p && n && p)
	{
		int hand[100000]={};
		int i=0,number=0;
		int hako=p;
		
		while(1)
		{
			number=i%n;
			
			if(hand[number]==p)break;
			
			if(hako!=0)
			{
				hako--;
				hand[number]++;
			}
			else
			{
				hako=hand[number];
				hand[number]=0;
			}
			i++;
		}
		cout<<number<<endl;
	}
	return 0;
}