#include <iostream>
#include <cstdio>
#define max 100000
#define sen 2000000000
using namespace std;

struct card{
    char suit;
    int value;
};

//???????????¶??????
card l[max/2+2],r[max/2+2];
void Merge(card a[],int n,int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;

    for (int i = 0; i < n1; ++i) {
        l[i]=a[left+i];
    }
    for (int i = 0; i < n2; ++i) {
        r[i]=a[mid+i];
    }

    l[n1].value=r[n2].value=sen;
    int i=0,j=0;
    for (int k = left; k < right; ++k) {
        if (l[i].value<=r[j].value){
            a[k]=l[i++];
        } else{
            a[k]=r[j++];
        }
    }
}

void merge_sort(card a[],int n,int left,int right){
    int mid;
    if (left+1<right){
        mid=(left+right)/2;
        merge_sort(a,n,left,mid);
        merge_sort(a,n,mid,right);
        Merge(a,n,left,mid,right);
    }
}

//??????????????????
int partition(card a[],int n,int begin,int end){
    card x=a[end];
    int i=begin-1;
    for (int j = begin; j < end; ++j) {
        if (a[j].value<=x.value){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[end]);
    return i+1;
}

void quicksort(card a[],int n,int begin,int end){
    int q;
    if (begin<end){
        q=partition(a,n,begin,end);
        quicksort(a,n,begin,q-1);
        quicksort(a,n,q+1,end);
    }
}

int main() {
    int n,val,stable=1;
    card a[max],b[max];
    char s[10];

    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%s %d",s,&val);
        a[i].suit=b[i].suit=s[0];
        a[i].value=b[i].value=val;
    }

    merge_sort(a,n,0,n);
    quicksort(b,n,0,n-1);

    for (int j = 0; j < n; ++j) {
        if (a[j].suit!=b[j].suit)
           stable=0;
    }

    if (stable==1){
        printf("Stable\n");
    } else{
        printf("Not stable\n");
    }

    for (int k = 0; k < n; ++k) {
        printf("%c %d\n",b[k].suit,b[k].value);
    }

    return 0;
}