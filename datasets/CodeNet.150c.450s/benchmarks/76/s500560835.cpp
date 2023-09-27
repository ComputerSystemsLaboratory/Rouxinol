#include<bits/stdc++.h>

using namespace std;

struct node
{
	int num,ls,rs;
	node(int _num)
	{
		num=_num;
		ls=-1;
		rs=-1;
	}
};

typedef vector<node> Tree;

Tree T;

void insert(int t,int n)
{
	
	if(T.size()==0)
		T.push_back(node(n));
	else if(T[t].num>n)
		if(T[t].ls==-1)
		{
			T[t].ls=T.size();
			T.push_back(node(n));
		}
		else insert(T[t].ls,n);
	else
		if(T[t].rs==-1)
		{
			T[t].rs=T.size();
			T.push_back(node(n));
		}
		else insert(T[t].rs,n);
}

void find(int t,int x)
{
	if(T.size()==0||t==-1)
		printf("no\n");
	else if(T[t].num==x)
		printf("yes\n");
	else if(x<T[t].num)
		find(T[t].ls,x);
	else find(T[t].rs,x);
}

void Preorder(int t)
{
	if(t==-1) return;
	printf(" %d",T[t].num);
	Preorder(T[t].ls);
	Preorder(T[t].rs);
}

void Inorder(int t)
{
	if(t==-1) return;
	Inorder(T[t].ls);
	printf(" %d",T[t].num);
	Inorder(T[t].rs);
}

void print()
{
	Inorder(0);
	printf("\n");
	Preorder(0);
	printf("\n");
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char s[10];
		scanf("%s",s);
		if(s[0]=='i')
		{
			int t;
			scanf("%d",&t);
			insert(0,t);
		}
		else if(s[0]=='f')
		{
			int t;
			scanf("%d",&t);
			find(0,t);
		}
		else print();
	}
}