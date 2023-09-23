#include<iostream>
#include<cstdio>

using namespace std;
static const int N = 100;

void inputArray(int a[], int n){
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
}

void swap(int a, int b){
    int v;
    v = a; a = b; b = v;
}

void printArray(int a[], int n){
    int k = 0;
    while(1){
        if(k==n-1) break;
        else{
            printf("%d ", a[k]);
        }
        k++;
    }
    printf("%d\n", a[n-1]);
}

int selectionSort(int a[], int n){
    int minj,count=0,v;
    for (int i = 0; i < n; ++i)
    {
        minj = i;
        for (int j = i; j < n; ++j)
        {
            if(a[j] < a[minj]){
                minj = j;
            }
        }
        if (i!=minj)
        {
            v = a[i]; a[i] = a[minj]; a[minj] = v;
            count++;
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int A[N];
    int n,m;

    cin >> n;
    inputArray(A,n);
    m = selectionSort(A,n);
    printArray(A,n);
    printf("%d\n", m);

    return 0;
}