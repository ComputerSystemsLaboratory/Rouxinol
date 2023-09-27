#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
struct Node
{
    int value;
    Node *prev,*next;
};
/*void init()*/
//{
    //node = (Node *)malloc(sizeof(Node));
    //node->prev = node;
    //node->prev = node;
    //return;
/*}*/
void insert(Node *head, int val)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->value = val;
    node->next = head->next;
    node->prev = head;
    head->next->prev = node;
    head->next = node;
} 
Node *listSearch(Node *head, int val)
{
    Node *cur = head->next;
    while(cur!=head && cur->value!=val)
    {
        cur = cur->next;
    }
    return cur;
}
void deleteNode(Node *node, Node *head)
{
    if(node==NULL) return;
    if(node==head) return;
    node->prev->next = node->next;
    node->next->prev = node->prev;
    free(node);
    return;
}
void deleteFirst(Node *head)
{
    deleteNode(head->next,head);
    return;
}
void deleteLast(Node *head)
{
    deleteNode(head->prev,head);        
    return;
}


void print(Node *head)
{
    Node *cur = head->next;
    while(cur!=head)
    {

        printf("%d",cur->value);
        cur = cur->next;
        if (cur==head) break;
        printf(" ");
    }
    printf("\n");
    return;
}

int main()
{
    int n;
    char com[20];
    int val;
    Node *node;
    node = (Node *)malloc(sizeof(Node));
    node->prev = node;
    node->next = node;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d",com,&val);
        if (com[0]=='i')
        { 
            insert(node, val); 
        } else if (com[0]=='d')
        { 
            if (strlen(com)>6)
            { 
                if (com[6]=='F')
                { 
                    deleteFirst(node); 
                }else if (com[6]=='L')
                {
                    deleteLast(node);
                }
            } else
            {
                deleteNode(listSearch(node,val),node);
            }
        }
    }
    print(node);
    return 0;
}