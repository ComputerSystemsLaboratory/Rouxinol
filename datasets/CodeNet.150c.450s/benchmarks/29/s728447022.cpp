#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
using namespace std;
struct Node{
   int key;
   Node *next,*prev;
};
Node *nil;
Node* listSearch(int key)
{
    Node* cur=nil->next;
    while(cur!=nil&&cur->key!=key)
    {
        cur=cur->next;
    }
    return cur;
}
void init()
{
    nil=(Node *)malloc(sizeof(Node));
    nil->next=nil;
    nil->prev=nil;
}
void printList()
{
    Node* cur=nil->next;
    int isf=0;

    while(1)
    {
        if(cur==nil) break;
        if(isf++>0) printf(" ");
        printf("%d",cur->key);
        cur=cur->next;
    }
    printf("\n");
}
void deleteNode(Node *t)
{
    if(t==nil) return ;
    t->prev->next=t->next;
    t->next->prev=t->prev;
    free(t);
}
void deleteFirst()
{

    deleteNode(nil->next);
}
void deleteLast()
{

    deleteNode(nil->prev);
}
void deleteKey(int key)
{
    deleteNode(listSearch(key));
}
void Insert(int key)
{
    Node *x=(Node*)malloc(sizeof(Node));
    x->key=key;

    x->next=nil->next;
    nil->next->prev=x;
    nil->next=x;
    x->prev=nil;
}
int main()
{
    int key,n,i;
    char com[20];
    scanf("%d",&n);
    init();
    for(i=0;i<n;i++)
    {
        scanf("%s",com);
        if(strcmp(com,"insert")==0)
        {
            scanf("%d",&key);
            Insert(key);

        }
        else if(strcmp(com,"deleteFirst")==0)
        {


        deleteFirst();
        }
        else if(strcmp(com,"deleteLast")==0)
        deleteLast();
        else
        {

        scanf("%d",&key);
        deleteKey(key);
        }


    }
    printList();
    return 0;
}