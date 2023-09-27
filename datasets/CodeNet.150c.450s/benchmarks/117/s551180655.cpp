#include <iostream>
using namespace std;
#define MAX 500000
#define H 2000000000

int c(0);
int L[MAX/2+2], R[MAX/2+2];
void Merge(int A[], int start, int middle, int end) 
{   
    int n1 = middle - start;
    int n2 = end - middle;
    for (int i = 0; i < n1; ++i) L[i] = A[start+i];  
    for (int i = 0; i < n2; ++i) R[i] = A[middle+i];
    L[n1] = R[n2] = H;
    int j = 0, k = 0;
    for (int i = start; i < end; ++i) 
    {
        if (L[j] > R[k]) A[i] = R[k++];
        else A[i] = L[j++];
        c++;
    }
}
void MergeSort(int A[], int start, int end) 
{
    if (end-start<=1) return; // 要素2個になった時点でreturn
    int middle = (start+end)/2; // 小数点以下切り捨て
    MergeSort(A, start, middle);
    MergeSort(A, middle, end);
    Merge(A, start, middle, end);
}
int main() 
{
    int n, S[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &S[i]);
    MergeSort(S, 0, n);
    for (int i = 0; i < n; ++i) 
    {
        printf("%d", S[i]);
        if (i == n-1) printf("\n%d\n", c);
        else printf(" ");
    }
}
