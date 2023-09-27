#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
using namespace std;

struct node{int p,l,r;};
node a[30];

void preo(node a[],int r)
{
	if(a[r].l==-1&&a[r].r==-1)cout<<" "<<r;
	else
	{
		cout<<" "<<r;
		if(a[r].l!=-1)preo(a,a[r].l);
		if(a[r].r!=-1)preo(a,a[r].r);
	}
}

void ino(node a[],int r)
{
	if(a[r].l==-1&&a[r].r==-1)cout<<" "<<r;
	else
	{
		if(a[r].l!=-1)ino(a,a[r].l);
		cout<<" "<<r;
		if(a[r].r!=-1)ino(a,a[r].r);
	}
}

void posto(node a[],int r)
{
	if(a[r].l==-1&&a[r].r==-1)cout<<" "<<r;
	else
	{
		if(a[r].l!=-1)posto(a,a[r].l);
		if(a[r].r!=-1)posto(a,a[r].r);
		cout<<" "<<r;
	}
}

int main()
{
	int n;cin>>n;
	for(int i=0;i<n;a[i++].p=-1);
	for(int i=0;i<n;i++)
	{
		int k;cin>>k;
		cin>>a[k].l>>a[k].r;
		if(a[k].l+1)a[a[k].l].p=k;
		if(a[k].r+1)a[a[k].r].p=k;
	}
	int r=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].p==-1)
		{
			r=i;
			break;
		}
	}
	cout<<"Preorder"<<endl;
	preo(a,r);
	cout<<endl<<"Inorder"<<endl;
	ino(a,r);
	cout<<endl<<"Postorder"<<endl;
	posto(a,r);
	cout<<endl;
	return 0;
}