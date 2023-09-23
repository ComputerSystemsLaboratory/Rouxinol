#include<iostream>
using namespace std;
int main()
{
int A=0;
int n;
while(cin>>n&&n!=0)
{
int a[n];
int R=-100000;
for(int h=0;h<n;h++)
{
	cin>>a[h];
}
for(int i=0;i<n;i++)
{
	for(int j=i;j<n;j++)
	{		
		A=A+a[j];
	if(R<A)
	{
		R=A;
	}	
	}	
	
	A=0;
}
cout<<R<<endl;
}
return 0;
}