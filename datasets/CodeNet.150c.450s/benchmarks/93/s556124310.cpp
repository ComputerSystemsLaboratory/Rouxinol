#include <bits/stdc++.h>
using namespace std;
#define MAX 1000006

struct info
{
    string s;
    int val;
};

bool less_than_equal(info a,info b)
{
    if(a.val <= b.val) return true;
    return false;
}

bool greater_than(info a,info b)
{
    if(a.val > b.val) return true;
    return false;
}

void Sort(info *arr,int L,int M,int R)
{
    int s1 = M-L+1;
    int s2 = R-M;

    info v1[s1],v2[s2];

    for(int i=0;i<s1;i++)
    {
        v1[i] = arr[L+i];
    }
    for(int i=0;i<s2;i++)
    {
        v2[i] = arr[M+1+i];
    }
    int i,j,k;
    i = j = 0;
    k = L;

    while(i<(s1) && j<(s2))
    {
        if(less_than_equal(v1[i],v2[j]))
        {
            arr[k++] = v1[i];
            i++;
        }
        else
        {
            arr[k++] = v2[j];
            j++;
        }
    }
    while(i<s1)
    {
        arr[k++] = v1[i++];
    }
    while(j<s2)
    {
        arr[k++] = v2[j++];
    }
}

void MergeSort(info *arr,int L,int R)
{
    if(L<R)
    {
        int M = L+(R-L)/2;
        MergeSort(arr,L,M);
        MergeSort(arr,M+1,R);
        Sort(arr,L,M,R);
    }
}

void some_stable_sort(info *arr,int n)
{
    MergeSort(arr,0,n-1);
}

int Partition(info *A,int p,int r)
{
    info x = A[r];
    int i = p - 1;
    for(int j = p;j<r;j++)
    {
        if(less_than_equal(A[j],x))
        {
            i = i + 1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i + 1;
}

void QuickSort(info *A,int p,int r)
{
    if(p<r)
    {
        int q = Partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}

info arr1[MAX];
info arr2[MAX];

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr1[i].s >> arr1[i].val;
        arr2[i] = arr1[i];
    }
    some_stable_sort(arr1,n);
    QuickSort(arr2,0,n-1);

    bool isStable = true;

    for(int i = 0 ; i < n ; i++)
    {
        if(arr1[i].s != arr2[i].s) isStable = false;
    }
    if(isStable) puts("Stable");
    else puts("Not stable");

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr2[i].s << " " << arr2[i].val << endl;
    }
    return 0;
}
