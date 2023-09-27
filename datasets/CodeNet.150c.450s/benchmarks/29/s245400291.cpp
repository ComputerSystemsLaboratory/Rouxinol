#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
struct node{
	int key;
	node *next,*prev;
	
};
char name[20];
node *nil;
node *list(int key)
{
	node *cur=nil->next;
	while(cur!=nil&&cur->key!=key)
	{
		cur=cur->next;
	}
	return cur;
}
void init()
{
	nil=(node*)malloc(sizeof(node));
	nil->next=nil;
	nil->prev=nil;
}
void printflist()
{
	node *cur=nil->next;
	int isf=0;
	while(1){
		if(cur==nil)break;
		if(isf++>0)printf(" ");
		printf("%d",cur->key);
		cur=cur->next;
	}
	printf("\n");
}
void deletenode(node *t)
{
	if(t==nil)return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t); 
}
void deletefirst()
{
	deletenode(nil->next);
}
void deletelast()
{
	deletenode(nil->prev);
}
void deletekey(int key)
{
     deletenode(list(key));	
}
void insert(int key)
{
	node *x=(node*)malloc(sizeof(node));
	x->key=key;
	x->next=nil->next;
	nil->next->prev=x;
	nil->next=x;
	x->prev=nil;
}
int main()
{
	int n,key;
	
	cin>>n;
	init();
	for(int i=1;i<=n;i++)
	{
		cin>>name;
		if(name[0]=='i'){
			cin>>key;
			insert(key);
		}
		else
		{
			if(name[6]=='F')
			{
				deletefirst();
			}
			else if(name[6]=='L')
			{
				deletelast();
			}
			else
			{
				cin>>key;
				deletekey(key);
			}
		}
	}
     printflist();
     return 0;
}