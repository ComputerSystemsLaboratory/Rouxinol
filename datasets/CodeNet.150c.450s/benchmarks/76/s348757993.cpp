#include<bits/stdc++.h>

using namespace std;

struct node
{
	int num,fa,ls,rs;
	node(int _num,int _fa)
	{
		num=_num;
		fa=_fa;
		ls=rs=-1;
	}
};

typedef vector<node> Tree;

Tree T;

void insert(int t,int n)
{
	if(T[0].num==INT_MAX) 
		T[0].num=n;
	else if(T[t].num>n)
		if(T[t].ls==-1)
		{
			T[t].ls=T.size();
			T.push_back(node(n,t));
		}
		else insert(T[t].ls,n);
	else
		if(T[t].rs==-1)
		{
			T[t].rs=T.size();
			T.push_back(node(n,t));
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

void lc(int fa,int son)
{
	T[fa].ls=son;
	if(son!=-1) T[son].fa=fa; 
}

void rc(int fa,int son)
{
	T[fa].rs=son;
	if(son!=-1) T[son].fa=fa;
}

void del(int t,int x)
{
	if(T[t].num==x)
	{
		if(T[t].ls==-1)
			if(T[t].rs==-1)
				if(T[T[t].fa].ls==t)
					T[T[t].fa].ls=-1;
				else T[T[t].fa].rs=-1;
			else
				if(T[T[t].fa].ls==t)
				{
					T[T[t].fa].ls=T[t].rs;
					T[T[t].rs].fa=T[t].fa;
				}
				else
				{
					T[T[t].fa].rs=T[t].rs;
					T[T[t].rs].fa=T[t].fa;
				}
		else if(T[t].rs==-1)
				if(T[T[t].fa].ls==t)
				{
					T[T[t].fa].ls=T[t].ls;
					T[T[t].rs].fa=T[t].fa;
				}
				else
				{
					T[T[t].fa].rs=T[t].ls;
					T[T[t].rs].fa=T[t].fa;
				}
			else
			{
				int mir=T[t].rs;
				while(T[mir].ls!=-1) mir=T[mir].ls;
				del(t,T[mir].num);
				T[t].num=T[mir].num;
			}
	}
	else if(x<T[t].num)
		del(T[t].ls,x);
	else del(T[t].rs,x);
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
	Inorder(T[1].ls);
	printf("\n");
	Preorder(T[1].ls);
	printf("\n");
}

int main()
{
	T.clear();
	T.push_back(node(INT_MAX,1));
	T.push_back(node(-1,-1));
	T[1].ls=0;
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
			insert(T[1].ls,t);
		}
		else if(s[0]=='f')
		{
			int t;
			scanf("%d",&t);
			find(T[1].ls,t);
		}
		else if(s[0]=='d')
		{
			int t;
			scanf("%d",&t);
			del(T[1].ls,t);
		}
		else print();
	}
	return 0;
}