#include<iostream>
using namespace std;
int main()//冒泡
{	int A[100],n,j,flag=1,change=0,x;
	cin>>n;
	for(j=0;j<n;j++)
			cin>>A[j];
	while(flag)
	{	flag=0;
		for(j=n-1;j>0;j--)
			if(A[j]<A[j-1])
			{
				x=A[j];
				A[j]=A[j-1],A[j-1]=x;
				change++;
				flag=1;
			}	
	}
	for(j=0;j<n;j++)
	{	cout<<A[j];
		if(j==n-1)
			cout<<endl;
		else if(j!=n-1)
			cout<<" ";
	}	
	cout<<change<<endl;
}

