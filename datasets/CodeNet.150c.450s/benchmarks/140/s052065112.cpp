#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
struct side{
    int n;
    int m;
    int l;
};
side sides[100000];
void mergesort(int l,int r){
    if(l==r)return;
    side temp;
    if(l==r-1){
        if(sides[l].l>sides[r].l){
            temp=sides[l];
            sides[l]=sides[r];
            sides[r]=temp;
        }
        return;
    }
    int mid=(l+r)/2,now=0;
    side b[r-l+1];
    mergesort(l,mid-1);
    mergesort(mid,r);
    for(int i=0;i<=r-l;i++){
        if(sides[i+l-now].l<sides[mid+now].l){
            b[i]=sides[i+l-now];
            if(i+l-now==mid-1){
                for(i++;i<=r-l;i++){
                    b[i]=sides[mid+now];
                    now++;
                }
            }
        }
        else{
            b[i]=sides[mid+now];
            now++;
            if(mid+now>r){
                for(i++;i<=r-l;i++)
                    b[i]=sides[i+l-now];
            }
        }
    }
    for(int i=0;i<=r-l;i++)
        sides[i+l]=b[i];
}
int main(){
    int n,m,a,ans=0,c=1;
    bool tree[10000];
    scanf("%d%d",&n,&m);
    if(m==0){
        printf("0\n");
        return 0;
    }
    tree[0]=true;
    for(int i=1;i<n;i++){
        tree[i]=false;
    }
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&sides[i].n,&sides[i].m,&sides[i].l);
    }
    mergesort(0,m-1);
    while(c<n){
        a=0;
        while(tree[sides[a].n]==tree[sides[a].m])a++;
        ans+=sides[a].l;
        tree[sides[a].n]=tree[sides[a].m]=true;
        c++;
    }
    printf("%d\n",ans);
}