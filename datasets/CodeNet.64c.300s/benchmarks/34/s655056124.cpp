#include<iostream>
#include<cstdio>

using namespace std;
static const int N = 100;

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

int main(int argc, char const *argv[])
{
    int A[N];
    int v,j,n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    printArray(A, n);
    for (int i = 1; i < n; ++i)
    {
        v = A[i];
        j = i-1;
        while(j>=0 && A[j]>v) {
            A[j+1] = A[j];
            A[j] = v;
            j--;
        }
        printArray(A,n);
    }

    return 0;
}