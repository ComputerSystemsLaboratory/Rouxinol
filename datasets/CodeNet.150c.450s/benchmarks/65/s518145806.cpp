#include<iostream>
using namespace std;

struct Card{
	char name;
	int value;
};
void Mao(struct Card A[],int n)
{
	int flag=1,i;
	while(flag)
	{
		flag=0;
		for(i=n-1;i>0;i--)
		{
			if(A[i].value<A[i-1].value)
			{
				struct Card k=A[i];
				A[i]=A[i-1];
				A[i-1]=k;
				flag=1;
			}
		}
	}
}
void Xuan(struct Card A[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
	    int	min=i;
		for(j=i;j<n;j++)
		{
			if(A[min].value>A[j].value)
			{
				min=j; 
			} 
		}
		struct Card p=A[min];
		A[min]=A[i];
		A[i]=p; 
	}
}
bool Isstable(struct Card A[],struct Card B[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i].name!=B[i].name)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,i;
	struct Card A[40],B[40];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>A[i].name>>A[i].value;
		B[i]=A[i];
	}
	Mao(A,n);
	Xuan(B,n);
	for(i=0;i<n-1;i++) cout<<A[i].name<<A[i].value<<" ";
	cout<<A[n-1].name<<A[n-1].value<<endl;
	cout<<"Stable"<<endl;
	for(i=0;i<n-1;i++) cout<<B[i].name<<B[i].value<<" ";
	cout<<B[n-1].name<<B[n-1].value<<endl;

	int p=1;
	for(i=0;i<n;i++)
	{
		if(!Isstable(A,B,n))
		{
			p=0;
		}
	}
	if(p)
	{
		cout<<"Stable"<<endl;
	}
	else
	cout<<"Not stable"<<endl;
	return 0;
} 