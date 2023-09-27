#include<iostream>
using namespace std;

const int MAX=1<<17;

int bit[MAX+1]={},n;//[1,n]

int sum(int i)//[1,i]
{
	int s=0;
	while(i>0)
	{
		s+=bit[i];
		i&=i-1;//i-=i&-i
	}
	return s;
}

void add(int i,int x)
{
	while(i<=n)
	{
		bit[i]+=x;
		i+=i&-i;
	}
	return;
}

int main()
{
	int q;cin>>n>>q;
	int a,b,c;
	for(int i=0;i<q;i++)
	{
		cin>>c>>a>>b;
		if(c)
		{
			cout<<sum(b)-sum(a-1)<<endl;
		}
		else add(a,b);
	}
	return 0;
}