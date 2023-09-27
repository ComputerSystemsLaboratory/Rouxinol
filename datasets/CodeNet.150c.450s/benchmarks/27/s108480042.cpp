#include <stdio.h>
struct binary_tree{
    int n;
    int l;
    int r;
};
binary_tree bt[1000000];
int now=0;
void push(int n,int t){
    if(now==0){
        bt[0].n=n;
        now++;
        return;
    }
    if(bt[t].n<n){
        if(bt[t].r==0){
            bt[t].r=now;
            bt[bt[t].r].n=n;
            now++;
        }
        else push(n,bt[t].r);
    }
    if(bt[t].n>n){
        if(bt[t].l==0){
            bt[t].l=now;
            bt[bt[t].l].n=n;
            now++;
        }
        else push(n,bt[t].l);
    }
}
void dfs(int n){
    printf(" %d",bt[n].n);
    if(bt[n].l!=0){
        dfs(bt[n].l);
    }
    if(bt[n].r!=0){
        dfs(bt[n].r);
    }
}
void print_sorted(int n){
    if(bt[n].l!=0){
        print_sorted(bt[n].l);
    }
    printf(" %d",bt[n].n);
    if(bt[n].r!=0){
        print_sorted(bt[n].r);
    }
}
int main(){
    int n,temp;
    char a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        bt[i].n=bt[i].l=bt[i].r=0;
        scanf("%s",a);
        if(a[0]=='i'){
            scanf("%d",&temp);
            push(temp,0);
        }
        if(a[0]=='p'){
            print_sorted(0);
            printf("\n");
            dfs(0);
            printf("\n");
        }
    }
}