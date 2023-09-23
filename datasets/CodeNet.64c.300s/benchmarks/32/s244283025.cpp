#include<iostream>
using namespace std;
int N,A[10010];
int min()
{
    int i;
    int min=A[0];
    for(i=0;i<N;i++)
    {
        if(A[i]<min)
            min=A[i];
    }
    return min;
}
int max()
{
    int i;
    int max=A[0];
    for(i=0;i<N;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
long long sum()
{
    long long sum=0;
    int i;
    for(i=0;i<N;i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main()
{
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<min()<<' '<<max()<<' '<<sum()<<endl;
}
