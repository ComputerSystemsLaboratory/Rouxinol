#include <cstdio>
#include <iostream>
using namespace std;
int n,root=0;
struct ti
{
    int par,lef,rig;
}nodes[30];
void preorder(int node)
{
    if(node==-1)return;
    printf(" %d",node);
    preorder(nodes[node].lef);
    preorder(nodes[node].rig);
}
void inorder(int node)
{
    if(node==-1)return;
    inorder(nodes[node].lef);
    printf(" %d",node);
    inorder(nodes[node].rig);
}
void postorder(int node)
{
    if(node==-1)return;
    postorder(nodes[node].lef);
    postorder(nodes[node].rig);
    printf(" %d",node);
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)nodes[i].par=-1;
    for(int i=0;i<n;i++)
    {
        int iid,ilef,irig;
        scanf("%d%d%d",&iid,&ilef,&irig);
        nodes[iid].lef=ilef;
        nodes[iid].rig=irig;
        if(ilef!=-1)nodes[ilef].par=iid;
        if(irig!=-1)nodes[irig].par=iid;
    }
    for(int i=0;i<n;i++)if(nodes[i].par==-1)root=i;
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    cout<<endl;
	return 0;
}
