#include<iostream>
using namespace std;
int main()
{
int a,i,j,k,l,m,n,o;
int A[5];
for(i=0;i<5;i++)
{
	cin>>A[i];
	}	
	for(j=0;j<5;j++)
	{
		if(A[j]>A[0])
		{
			a=A[0];
			A[0]=A[j];
			A[j]=a;
			a=0;
		}
	}
	for(k=1;k<5;k++)
	{
	if(A[k]>A[1])
		{
			a=A[1];
			A[1]=A[k];
			A[k]=a;
			a=0;
		}	
	}
	for(l=2;l<5;l++)
	{
	if(A[l]>A[2])
		{
			a=A[2];
			A[2]=A[l];
			A[l]=a;
			a=0;
		}	
	}
	for(m=3;m<5;m++)
	{
	if(A[m]>A[3])
		{
			a=A[3];
			A[3]=A[m];
			A[m]=a;
			a=0;
		}	
	}
	for(n=4;n<5;n++)
	{
	if(A[i]>A[4])
		{
			a=A[4];
			A[4]=A[n];
			A[n]=a;
			a=0;
		}	
	}
	for(o=0;o<4;o++)
	{
	cout<<A[o]<<" ";
	}
	cout<<A[4]<<endl;
	return 0;
}