#include<iostream>
using namespace std;
int main()
{
int n,S;
int a[4];

while(cin>>n)
{
S=0;
a[0]=0;
a[1]=0;
a[2]=0;
a[3]=0;
for(int i=0;i<10;i++)
{
	a[0]=i;
	for(int j=0;j<10;j++)
{
	a[1]=j;
	for(int k=0;k<10;k++)
{
	a[2]=k;
		for(int l=0;l<10;l++)
{
	a[3]=l;
	if(a[0]+a[1]+a[2]+a[3]==n)
	{
		S++;
	}
}
}	
}
}
cout<<S<<endl;	
}
return 0;
}