#include<stdio.h>
#include<vector>
using namespace std;
struct kz
{
    int parent=-1;
    int left;
    int right;
}Tree[50];
void mmp1(int x)
{
    if(x==-1)
        return ;
   printf(" %d",x);
    mmp1(Tree[x].left);
    mmp1(Tree[x].right);
}
void mmp2(int x)
{
    if(x==-1)
        return ;
    mmp2(Tree[x].left);
    printf(" %d",x);
    mmp2(Tree[x].right);
}
void mmp3(int x)
{
        if(x==-1)
        return ;
    mmp3(Tree[x].left);
    mmp3(Tree[x].right);
    printf(" %d",x);

}
int main()
{
    int n,m;
    scanf("%d",&n);
    int l,r;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&m,&l,&r);
         Tree[m].left=l;
         Tree[m].right=r;
         Tree[r].parent=m;
         Tree[l].parent=m;
    }
    int s=0;
    for(int i=0;i<n;i++)
    {
        if(Tree[i].parent==-1)
        {
            s=i;
            break;
        }
    }
        printf("Preorder\n");
   mmp1(s);
   printf("\n");
   printf("Inorder\n");
   mmp2(s);
   printf("\n");
   printf("Postorder\n");
   mmp3(s);
   printf("\n");
    return 0;
}