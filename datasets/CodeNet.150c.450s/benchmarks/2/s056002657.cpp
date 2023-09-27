#include<iostream>
using namespace std;
#define maxx 100005
int a[maxx];
int kk;
int n;
void partition(int left,int right)
{
	int x=a[right-1];
	kk=left;//下一个待比较的数，即可能的界限位置 
	for(int i=left;i<right-1;i++)
	{
		if(a[i]<=x)
		{
		//	cout<<a[kk]<<" "<<a[i]<<endl;
			int tt=a[kk];
			a[kk]=a[i];
			a[i]=tt;
			kk++;
		}
	}
	
	int tt=a[kk];
	a[kk]=a[right-1];
	a[right-1]=tt;
}
int main()
{
	//int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	partition(0,n);
	for(int i=0;i<n;i++)
	{
		if(i==kk+1)
			cout<<"]";
		if(i>0)
			cout<<" ";
		if(i==kk)
			cout<<"[";
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}
