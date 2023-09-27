
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=1e5+5;
const int sentinel=0x3f3f3f3f;

struct card{
    char suit;
    int value;
};

int n;
card a[maxn],b[maxn],l[maxn/2+2],r[maxn/2+2];

void merge(int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++){
        l[i]=a[left+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[mid+i];
    }
    l[n1].value=r[n2].value=sentinel;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i].value<=r[j].value){
            a[k]=l[i++];
        }else{
            a[k]=r[j++];
        }
    }
}

void mergesort(int left,int right)
{
    int mid;
    if(left+1<right){
        mid=(left+right)>>1;
        mergesort(left,mid);
        mergesort(mid,right);
        merge(left,mid,right);
    }
}

int partition(int p,int r)
{
    struct card t,x;
    x=b[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(b[j].value<=x.value){
            i++;
            swap(b[i],b[j]);
        }
    }
    swap(b[i+1],b[r]);
    return i+1;
}

void quicksort(int p,int r)
{
    int q;
    if(p<r){
        q=partition(p,r);
        quicksort(p,q-1);
        quicksort(q+1,r);
    }
}

int main()
{
    char s[10];
    int stable=1,v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",s,&v);
        a[i].suit=b[i].suit=s[0];
        a[i].value=b[i].value=v;
    }
    mergesort(0,n);
    quicksort(0,n-1);
    for(int i=0;i<n;i++){
        if(a[i].suit!=b[i].suit){
            stable=0;
            break;
        }
    }
    if(stable==1){
        printf("Stable\n");
    }else{
        printf("Not stable\n");
    }
    for(int i=0;i<n;i++){
        printf("%c %d\n",b[i].suit,b[i].value);
    }
    return 0;
}
/*
6
D 3
H 2
D 1
S 3
D 2
C 1
*/

