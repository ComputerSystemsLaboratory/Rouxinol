#include<bits/stdc++.h>
using namespace std;
struct Node{
    int left,right,parent;
    Node(){ left=right=parent=-1; }
};
Node tree[25];
void preprint(int n){
    printf(" %d",n);
    if(~tree[n].left) preprint(tree[n].left);
    if(~tree[n].right) preprint(tree[n].right);
}
void inprint(int n){
    if(~tree[n].left) inprint(tree[n].left);
    printf(" %d",n);
    if(~tree[n].right) inprint(tree[n].right);
}
void posprint(int n){
    if(~tree[n].left) posprint(tree[n].left);
    if(~tree[n].right) posprint(tree[n].right);
    printf(" %d",n);
}
int main(){
    int n;
    scanf("%d",&n);
    int id,lef,rig;
    for(int i=0;i<n;++i){
        scanf("%d%d%d",&id,&lef,&rig);
        tree[id].left=lef; tree[id].right=rig;
        if(~lef) tree[lef].parent=id;
        if(~rig) tree[rig].parent=id;
    }
    int root=0;
    while(~tree[root].parent){ root=tree[root].parent; }
    printf("Preorder\n");
    preprint(root);
    putchar('\n');
    printf("Inorder\n");
    inprint(root);
    putchar('\n');
    printf("Postorder\n");
    posprint(root);
    putchar('\n');
    return 0;
}