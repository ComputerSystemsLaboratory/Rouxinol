#include <iostream>
#define MAX 100001
using namespace std;

void Partition(int A[], int n, int& l) // l is the last index of smaller part
{
    int x = A[n-1];
    for (int i = 0; i < n-1; ++i) 
    {
        if (A[i] <= x) 
        {
            swap(A[i], A[l+1]);
            l++;
        }
    }
    l++;
    swap(A[l], A[n-1]);
}

int main() 
{
    int n, A[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &A[i]);
    int l = -1;
    Partition(A, n, l);

    for (int i = 0; i < n; ++i) 
    {
        if (i == l) printf("[%d]", A[i]);
        else printf("%d", A[i]);
        if (i != n-1) printf(" ");
        else printf("\n");
    }
}
