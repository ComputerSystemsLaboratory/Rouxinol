#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
typedef long long ll;
struct fun{
    int a;
    int b;
    int c;
}ff[30];
bool cmp(const fun &x,const fun &y){
    return x.a<y.a;
}
int f[30];
void qian(int x){
    if(x!=-1)
        printf(" %d",ff[x].a);
    else
        return ;
    qian(ff[x].b);
    qian(ff[x].c);
}
void zhong(int x){
    if(x!=-1)
        zhong(ff[x].b);
    else
        return ;
    printf(" %d",ff[x].a);
    zhong(ff[x].c);
}
void hou(int x){
    if(x!=-1)
        hou(ff[x].b);
    else
        return ;
    if(x!=-1)
        hou(ff[x].c);
    else
        return ;
    printf(" %d",ff[x].a);
}
int main(){
    int n;
    int q;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&ff[i].a,&ff[i].b,&ff[i].c);
        if(ff[i].b==-1&&ff[i].c==-1){
            f[ff[i].a]=1;
            continue;
        }
        if(ff[i].b>=0)
            f[ff[i].b]=1;
        if(ff[i].c>=0)
            f[ff[i].c]=1;
    }
    sort(ff,ff+n,cmp);
    if(n==1){
        printf("Preorder\n 0\n");
        printf("Inorder\n 0\n");
        printf("Postorder\n 0\n");
        return 0;
    }
    for(int i=0;i<n;i++)
        if(!f[i]){
            q=i;
            break;
        }
    printf("Preorder\n");
    qian(q);
    printf("\n");
    printf("Inorder\n");
    zhong(q);
    printf("\n");
    printf("Postorder\n");
    hou(q);
    printf("\n");
    return 0;
}

