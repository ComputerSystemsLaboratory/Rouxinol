#include <iostream>
using namespace std;
int A[2000000],B[2000000],C[10001];
void Sort(int n)
{
    int i;
    for(i=0;i<10001;i++)
        C[i] = 0;
    for(i=0;i<n;i++)
        C[A[i]]++;
    for(i=0;i<10000;i++)
        C[i+1] += C[i];
    for(i=0;i<n;i++)
    {
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>A[i];
    Sort(n);
    for(i=0;i<n;i++)
    {
        if(i)
            cout<<' ';
        cout<<B[i];
    }
    cout<<endl;
    return 0;
}