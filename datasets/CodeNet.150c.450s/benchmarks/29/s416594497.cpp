#include<iostream>
#include<stdio.h>
#include<malloc.h>
#include<string.h>
using namespace std;
typedef struct node{
	int key;
	struct node *prev,*next;
}q,*qq;
node *head;//仅声明还没有内存分配 
void init()//关键的初始化！！！ 
{
	head=(q*)malloc(sizeof(q));
	head->next=head;//!!! 
	head->prev=head;//!!!
}
void insert(int key) 
{
	/* 尾插入法 
	qq tt=head;
	while(tt->next)
	{
		tt=tt->next;
	}
	qq ttnode=(q*)malloc(sizeof(q));
	ttnode.prev=tt;
	ttnode.next=null;
	ttnode.key=key;*/
	
	//头插入法
	qq ttnode=(q*)malloc(sizeof(q));
	ttnode->key=key;
	ttnode->prev=head;
	ttnode->next=head->next; 
	head->next->prev=ttnode;
	head->next=ttnode;
}

qq listsearch(int key)
{
	qq cur = head->next;//从头结点后面的元素开始访问 
	while(cur!=head&&cur->key!=key)
	{
		cur=cur->next;
	}
	return cur;
}

void deleteNode(qq t)//删除指定结点 
{
	if(t==head)
		return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t);
}

void deleteFirst()
{
	deleteNode(head->next);	
} 

void deleteLast()
{
	deleteNode(head->prev);
}

void deleteKey(int key)
{
	deleteNode(listsearch(key));
}

void printList()
{
	qq ppp=(q*)malloc(sizeof(q));
	ppp=head->next;
	int flag=0;
	while(ppp!=head)
	{
		if(flag!=0)
			cout<<" "<<ppp->key;
		else
			cout<<ppp->key;
		flag++;
		ppp=ppp->next;
	}
	printf("\n"); 
}
int main()
{
	int n;
	cin>>n;
	char com[20];
	int kkey;
	init();
	while(n--)
	{
		scanf("%s%d",com,&kkey);//使用效率更高的输入函数
		if(com[0]=='i')
		{
			insert(kkey);
			//printList();
			//cout<<endl;
			//cout<<"dadada"<<endl;
		}
			
		else if(com[0]=='d'){
			if(strlen(com)>6){
				if(com[6]=='F')
					deleteFirst();
				else if(com[6]=='L')
					deleteLast();
				}
			else
				deleteKey(kkey);
			}
	} 
	printList();
	return 0;
}
/*
7
insert 5
insert 2
insert 3
insert 1
delete 3
insert 6
delete 5
*/
	

