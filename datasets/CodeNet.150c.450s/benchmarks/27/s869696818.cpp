#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=100+10;
char cmd[20];
int d;
int n;
struct Node
{
    int key;
    Node* left;
    Node* right;
};
int cnt;
Node *root=NULL;
void in_order(Node *p)
{
    if(p==NULL) return;
     in_order(p->left);
     printf(" %d",p->key);
    in_order(p->right);
}
void pre_order(Node *p)
{
     if(p==NULL) return;
     printf(" %d",p->key);
      pre_order(p->left);
    pre_order(p->right);
}
void print()
{
    in_order(root);
    printf("\n");
    pre_order(root);
    printf("\n");
}
void post_delete(Node *p)
{
     if(p==NULL) return;
    post_delete(p->left);
    post_delete(p->right);
    free(p);
}
void insert(int k)
{
   Node * node=(Node *)malloc(sizeof(Node));
   node->key=k;
   node->left=NULL;
   node->right=NULL;

   Node *p=NULL;
   Node *q=root;
   while(q!=NULL)
   {
       p=q;
       if(p->key>k)
       {
           q=q->left;
       }
       else q=q->right;
   }
   if(p==NULL)
   {
        root=node;
   }
   else if(p->key>k)
   {
       p->left=node;
   }
   else p->right=node;

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {

        scanf("%s",cmd);
        switch(cmd[0])
        {
        case 'i':
        {
            scanf("%d",&d);
            insert(d);
            break;
        }
        case 'p':
        {
            print();
            break;

        }
        }
    }
    post_delete(root);
    return 0;
}