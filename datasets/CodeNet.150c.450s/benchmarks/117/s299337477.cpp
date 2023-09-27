#include <iostream>
#define max 500000
#define sentinel 2000000000

using namespace std;

int l[max/2+2],r[max/2+2];
int cnt;

void Merge(int a[],int n,int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    //???l??°?????????
    for (int i = 0; i < n1; ++i) {
        l[i]=a[left+i];
    }
    //???r??°?????????
    for (int j = 0; j < n2; ++j) {
        r[j]=a[mid+j];
    }
    l[n1]=r[n2]=sentinel;
    int i=0,j=0;
    for (int k = left; k < right; ++k) {
        cnt++;
        if (l[i]<=r[j]){
            a[k]=l[i++];
        }
        else{
            a[k]=r[j++];
        }

    }
}

void merge_sort(int a[],int n,int left,int right){
    if (left+1<right){
        int mid=(left+right)/2;
        merge_sort(a,n,left,mid);
        merge_sort(a,n,mid,right);
        Merge(a,n,left,mid,right);
    }
}

int main() {
    int a[max],n;
    scanf("%d",&n);
    cnt=0;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }

    merge_sort(a,n,0,n);

    for (int i = 0; i < n; ++i) {
        if(i>0)
            printf(" ");
        printf("%d",a[i]);
    }

    printf("\n");

    printf("%d\n",cnt);

    return 0;
}