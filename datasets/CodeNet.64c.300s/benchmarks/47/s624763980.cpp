#include<iostream>
using namespace std;
int main()
{
	int a[100]={0};
	int b[100][2]={0};
	int B1,B2;
	int i=0;
	for(int h=0;h<100;h++)
	{
		b[h][1]=h+1;
	}
while (cin>>a[i])
{
	b[a[i]-1][0]++;
	i++;
}
for(int j=0;j<i;j++)
{
	for(int k=j+1;k<i;k++)
	{
		if(b[k][0]>b[j][0])
		{
			B1=b[k][0];
			b[k][0]=b[j][0];
			b[j][0]=B1;
			B2=b[k][1];
			b[k][1]=b[j][1];
			b[j][1]=B2;
		}
	}
}
int l=0;
while(b[l][0]==b[0][0])
{
	cout<<b[l][1]<<endl;
	l++;
}
return 0;
}