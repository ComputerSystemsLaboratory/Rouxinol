#include<stdio.h>
#include<string.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
struct node
{  int key;
   node *next,*prev;
};
node *head;
node *listsearch(int key)
{  node *cur=head->next;
   while(cur!=head&&cur->key!=key) 
     cur=cur->next;
   return cur;
}
void init()// 初始化双向链表，即生成空结点为表头，让head.next和head.prev都指向head 
{  head=new node;
   head->next=head;
   head->prev=head;
}
void printlist()
{  node *cur=head->next;
   int isf=0;
   while(1)
   {  if(cur==head) break;
      if(isf++>0) printf(" ");
      printf("%d",cur->key);
      cur=cur->next;
   }
   printf("\n");
}
void deletenode(node *t)//删除相应结点 
{  if(t==head)  return;//如果t为头结点时不做处理
   t->prev->next=t->next;//t的前一个结点的next指向t的后一个结点 
   t->next->prev=t->prev;//t的后一个结点的prev指向t的前一个结点 
   delete t; 
}
void deletefirst()// 删除头结点next所指向的结点 
{  deletenode(head->next); 
}
void deletelast()// 删除头结点prev 所指向的结点 
{  deletenode(head->prev); 
}
void deletekey(int key)// 删除搜索到的结点 
{  deletenode(listsearch(key));
}
void insert(int key)//新的结点总是在头结点的后面 
{  node *x=new node;
   x->key=key;
   x->next=head->next;
   head->next->prev=x;
   head->next=x;
   x->prev=head;
}
int main()
{  int key,n,i;
   int size=0;
   char com[20];
   int np=0,nd=0;
   scanf("%d",&n);
   init();
   for(i=0;i<n;i++)
   {  scanf("%s%d",&com,&key);
      if(com[0]=='i')
      {  insert(key);
         np++;
         size++;
      }
      else if(com[0]=='d')
      {  if(strlen(com)>6)
         {  if(com[6]=='F')  deletefirst();
            else if(com[6]=='L')  deletelast();
         }
         else
        {  deletekey(key);
           nd++;
        }
      }
      size--;
   }
   printlist();
} 
