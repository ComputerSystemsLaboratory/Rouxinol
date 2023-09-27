#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn=2000000+10;
const int maxv=10000+10;
int n;
int C[maxv];
int *A=NULL, *B=NULL;
void count_sort(int A[],int B[],int n)
{

    for(int i=0;i<maxv;i++) C[i]=0;
    for(int i=0;i<n;i++) C[A[i]]++;
    for(int i=1;i<maxv;i++)
    {
        C[i]=C[i]+C[i-1];
    }

    for(int i=0;i<n;i++)
    {
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    A=(int *)malloc(sizeof(int)*n+1);
    B=(int *)malloc(sizeof(int)*n+1);
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    count_sort(A,B,n);

    for(int i=1;i<=n;i++)
    {
        if(i>1) printf(" ");
        printf("%d",B[i]);
    }
    printf("\n");
    free(A);
    free(B);

    return 0;
}