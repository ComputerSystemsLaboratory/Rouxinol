#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<queue>
#include<stack>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<cstdlib>
#include<typeinfo>
#include<sstream>
#include<list>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define fori(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
int stringInt(string a)
{
	return atoi(a.c_str());
}
string intString(int a)
{
	stringstream ss;
	ss<<a;
	return ss.str();
}
vector<int> SieveOfEratosthenes(int x)
{
	vector<int> a;
	vector<int> b(x+1,0);
	for(int i=2;i<=x;i++)
	{
		if(b[i]==0)
		{
			a.push_back(i);
			for(int l=i;l<=x;l+=i)
			{
				b[l]=1;
			}
		}
	}
	return a;
}

struct node
{
	int p,l,r;
};
node a[100];

void pr(int f)
{
	if(f==-1)return;
	cout<<" "<<f;
	pr(a[f].l);
	pr(a[f].r);
	return;
}
void in(int f)
{
	if(f==-1)return ;
	in(a[f].l);
	cout<<" "<<f;
	in(a[f].r);
	return ;
}
void po(int f)
{
	if(f==-1)return ;
	po(a[f].l);
	po(a[f].r);
	cout<<" "<<f;
	return ;
}

int main()
{
	int n;cin>>n;
	rep(i,n)a[i].p=a[i].r=a[i].l=-1;
	rep(i,n)
	{
		int id,L,R;
		cin>>id>>L>>R;
		a[id].l=L;
		a[id].r=R;
		if(L!=-1)a[L].p=id;
		if(R!=-1)a[R].p=id;
	}
	int ro;
	rep(i,n)if(a[i].p==-1)ro=i;

	cout<<"Preorder"<<endl;
	pr(ro);
	cout<<endl;
	cout<<"Inorder"<<endl;
	in(ro);
	cout<<endl;
	cout<<"Postorder"<<endl;
	po(ro);
	cout<<endl;


}