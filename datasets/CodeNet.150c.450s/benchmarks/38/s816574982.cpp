#include <iostream>
using namespace std;
 
int main()
{
    int N,a,b,c,i,j;
    cin>>N;
    int A[3*N];
    for(i=0;i<N;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        j=3*i;
        A[j] = a;
        A[j+1] = b;
        A[j+2] = c;
        
    }
    for (i=0;i<3*N;i=i+3)
    {
        if (A[i]*A[i]==A[i+1]*A[i+1]+A[i+2]*A[i+2] || A[i+1]*A[i+1]==A[i]*A[i]+A[i+2]*A[i+2] || A[i+2]*A[i+2]==A[i]*A[i]+A[i+1]*A[i+1])
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}