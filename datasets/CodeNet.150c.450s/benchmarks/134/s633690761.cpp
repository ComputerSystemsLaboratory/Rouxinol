#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct tree{
    int left;
    int key;
    int right;
}tr[30];
bool cmp(tree t1,tree t2);
void preorder(tree t);
void inorder(tree t);
void postorder(tree t);
int pre[30],ino[30],pos[30];
int j,k,l;
int main(){
    int n;
    while(~scanf("%d",&n)){
        int i;
        memset(tr,0,sizeof(tr));
        for(i=0;i<n;i++)
            scanf("%d %d %d",&tr[i].key,&tr[i].left,&tr[i].right);
        sort(tr,tr+n,cmp);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(tr[i].key==tr[j].left||tr[i].key==tr[j].right)
                    break;
            }
            if(j==n)break;
        }
        j=0;k=0;l=0;
        preorder(tr[i]);
        inorder(tr[i]);
        postorder(tr[i]);
        printf("Preorder\n");
        for(i=0;i<j;i++)
            printf(" %d",pre[i]);
        printf("\nInorder\n");
        for(i=0;i<k;i++)
            printf(" %d",ino[i]);
        printf("\nPostorder\n");
        for(i=0;i<l;i++)
            printf(" %d",pos[i]);
        printf("\n");
    }
}
void preorder(tree t){
    if(t.key!=-1){
        pre[j++]=t.key;
        if(t.left!=-1)
            preorder(tr[t.left]);
        if(t.right!=-1)
            preorder(tr[t.right]);
    }
    else return;
}
void inorder(tree t){
    if(t.key!=-1){
        if(t.left!=-1)
            inorder(tr[t.left]);
        ino[k++]=t.key;
        if(t.right!=-1)
            inorder(tr[t.right]);
    }
    else return;
}
void postorder(tree t){
    if(t.key!=-1){
        if(t.left!=-1)
            postorder(tr[t.left]);
        if(t.right!=-1)
            postorder(tr[t.right]);
        pos[l++]=t.key;
    }
    else return;
}
bool cmp(tree t1,tree t2){
    return t1.key<t2.key;
}



