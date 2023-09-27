#include<iostream>
using namespace std;

struct Card{char suit,value;};

int main()
{
	int n=0;cin>>n;
	Card a[100]={0},b[100]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i].suit>>a[i].value;
		b[i]=a[i];
	}
	
//<bubble>
	int f=1;
	for(int j=0;f==1;j++)
	{
		f=0;
		for(int i=n-1;i>j;i--)
		{
			if(a[i].value<a[i-1].value)
			{
				swap(a[i],a[i-1]);
				f=1;
			}
		}
	}
	
	cout<<a[0].suit<<a[0].value;
	for(int i=1;i<n;i++)
	{
		cout<<" "<<a[i].suit<<a[i].value;
	}
	cout<<endl<<"Stable"<<endl;
//</bubble>
	
//<selection>
	for(int i=0;i<n;i++)
	{
		int minj=i;
		for(int j=i;j<n;j++)
		{
			if(b[j].value<b[minj].value)
			{
				minj=j;
			}
		}
		swap(b[i],b[minj]);
	}
	
	cout<<b[0].suit<<b[0].value;
	for(int i=1;i<n;i++)
	{
		cout<<" "<<b[i].suit<<b[i].value;
	}
	f=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].suit!=b[i].suit)
		{
			cout<<endl<<"Not stable"<<endl;
			f=1;break;
		}
	}
	if(f==0)cout<<endl<<"Stable"<<endl;
//</selection>
	
	return 0;
}