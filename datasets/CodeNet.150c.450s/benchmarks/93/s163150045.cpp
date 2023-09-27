#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define INF 2e9
const int maxn=100000+10;
int n;

typedef struct
{
    char c;
    int v;
} Card;
Card card[maxn];
Card B[maxn];
Card L[maxn/2+2],R[maxn/2+2];
void merge(Card a[],int left,int mid,int right)
{
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0; i<n1; i++) L[i]=a[left+i];
    for(int i=0; i<n2; i++) R[i]=a[mid+i];
    L[n1].v=INF,R[n2].v=INF;
    int i=0,j=0;
    for(int k=left; k<right; k++)
    {
        if(L[i].v<=R[j].v)
        {
            a[k]=L[i++];

        }
        else
        {
            a[k]=R[j++];

        }
    }



}
void merge_sort(Card a[],int left,int right)
{
    if(right-left>1)
    {
        int mid=(left+right)/2;
        merge_sort(a,left,mid);
        merge_sort(a,mid,right);
        merge(a,left,mid,right);

    }

}

int partition(int left,int right)
{
    int key=card[right].v;

    int i=left-1;
    for(int j=left; j<right; j++)
    {


        if(card[j].v<=key)
        {
            i++;
            swap(card[i],card[j]);
        }
    }
    swap(card[i+1],card[right]);
    return i+1;
}
void quick_sort(int left,int right)
{
    if(right>left)
    {


        int mid=partition(left,right);
        quick_sort(left,mid-1);
        quick_sort(mid+1,right);
    }

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        getchar();
        scanf("%c %d",&card[i].c,&card[i].v);
    }
    memcpy(B,card,sizeof(card));
    merge_sort(B,0,n);

    quick_sort(0,n-1);

    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(card[i].c!=B[i].c||card[i].v!=B[i].v)
        {
            flag=false;
            break;
        }
    }
    if(flag) printf("Stable\n");
    else printf("Not stable\n");
    for(int i=0; i<n; i++) printf("%c %d\n",card[i].c,card[i].v);


    return 0;
}