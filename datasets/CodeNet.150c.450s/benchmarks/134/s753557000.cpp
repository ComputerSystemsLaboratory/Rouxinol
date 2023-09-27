#include <stdio.h>
struct tree{
    int l;
    int r;
    bool root;
};
tree map[100000];
void pre(int now){
    printf(" %d",now);
    if(map[now].l!=-1)pre(map[now].l);
    if(map[now].r!=-1)pre(map[now].r);
}
void in(int now){
    if(map[now].l!=-1)in(map[now].l);
    printf(" %d",now);
    if(map[now].r!=-1)in(map[now].r);
}
void post(int now){
    if(map[now].l!=-1)post(map[now].l);
    if(map[now].r!=-1)post(map[now].r);
    printf(" %d",now);
}
int main(){
    int n,l,r,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)map[i].root=true;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&v,&l,&r);
        map[v].l=l;
        map[v].r=r;
        if(l!=-1)map[l].root=false;
        if(r!=-1)map[r].root=false;
    }
    for(int i=0;i<n;i++)if(map[i].root){
        printf("Preorder\n");
        pre(i);
        printf("\nInorder\n");
        in(i);
        printf("\nPostorder\n");
        post(i);
        printf("\n");
        return 0;
    }
}