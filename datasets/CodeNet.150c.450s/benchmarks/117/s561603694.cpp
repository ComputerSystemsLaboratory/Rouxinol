#include<stdio.h>
using namespace std;

int a[500005],l[250005],r[250005],x=0;

void s(int a[],int n,int left,int mid,int right){
    int n1=right-mid;
    int n2=mid-left;
    for(int i=0;i<n1;i++) r[i]=a[i+mid];
    for(int i=0;i<n2;i++) l[i]=a[i+left];
    r[n1]=l[n2]=2000000000;
    int i=0,j=0;
    for(int g=left;g<right;g++){
        x++;
        if(l[i]<=r[j]){
            a[g]=l[i++];
        }
        else{
            a[g]=r[j++];
        }
    }
}

void sm(int a[],int n,int left,int right){
    if(left+1<right){
        int mid=(right+left)/2;
        sm(a,n,left,mid);
        sm(a,n,mid,right);
        s(a,n,left,mid,right);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sm(a,n,0,n);
    for(int i=0;i<n;i++){
        if(!i) printf("%d",a[i]);
        else printf(" %d",a[i]);
    }
    printf("\n%d\n",x);
    return 0;
}