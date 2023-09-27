#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=30;
typedef struct
{
    int left;
    int right;
}Node ;
Node node[maxn];
int p[maxn];
int n;
void pre_order(int v)
{
    if(v==-1) return;
   printf(" %d",v);
   pre_order(node[v].left);
   pre_order(node[v].right);

}
void in_order(int v)
{
     if(v==-1) return;

   in_order(node[v].left);
    printf(" %d",v);
   in_order(node[v].right);
}
void post_order(int v)
{
 if(v==-1) return;

   post_order(node[v].left);
   post_order(node[v].right);
    printf(" %d",v);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int id,left,right;
    for(int i=0;i<n;i++)
    {
        node[i].left=-1;
        node[i].right=-1;
        p[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&id,&left,&right);
        node[id].left=left;
        node[id].right=right;
        p[left]=id;
        p[right]=id;
    }
    int root=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]==-1)
        {
            root=i;
            break;
        }
    }
    printf("Preorder\n");
    pre_order(root);
    printf("\n");
     printf("Inorder\n");
     in_order(root);
     printf("\n");
     printf("Postorder\n");
    post_order(root);
    printf("\n");
    return 0;
}