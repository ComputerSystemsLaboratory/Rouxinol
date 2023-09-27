#include<cstdio>
#include<iostream>
using namespace std;
struct card{
char c;
int a;
}card1[100010],card2[100010],temp;
int  partition(int p,int r)
{
    int x = card1[r].a;
    int i = p - 1,j;
    for(j = p;j < r;j++)
        if(card1[j].a <= x)
    {
        i++;
        temp = card1[j];
        card1[j] = card1[i];
        card1[i] = temp;
    }
    temp = card1[i+1];
    card1[i+1] = card1[r];
    card1[r] = temp;
    return i+1;
}
void quicksort(int p,int r)
{
    if (p < r)
    {
        int q = partition (p,r);
        quicksort (p,q - 1);
        quicksort (q + 1,r);
    }
}
void merge(int left,int mid,int right)
{
    int n1 = mid - left,n2 = right - mid;
    struct card l[n1 + 10],r[n2 + 10];
    int i,j,k;
    for(i = 0;i < n1;i++)
        l[i] = card2[left + i];
    for(i = 0;i < n2;i++)
        r[i] = card2[mid + i];
        i = j = 0;
        l[n1].a = r[n2].a = 1000000000;
    for(k = left;k < right;k++)
    {
        if(l[i].a <= r[j].a)
            card2[k] = l[i++];
        else
            card2[k] = r[j++];
    }
}
void mergesort(int left,int right)
{
    if(left + 1 < right)
    {
        int mid = (left + right) / 2;
        mergesort(left,mid);
        mergesort(mid,right);
        merge(left,mid,right);
    }
}
int main()
{
    int n,i,flag = 0;
    cin >> n;
    for (i=0;i < n;i++)
    {
             cin >> card1[i].c >> card1[i].a;
             card2[i] = card1[i];
    }
    quicksort(0,n - 1);
    mergesort(0,n);
    for (i=0;i < n;i++)
        if(card1[i].c != card2[i].c)
        {
               flag = 1;
               break;
        }
      if(flag == 0)
        printf("Stable\n");
      else
        printf("Not stable\n");
          for (i=0;i < n;i++)
            printf("%c %d\n",card1[i].c,card1[i].a);
            return 0;
}