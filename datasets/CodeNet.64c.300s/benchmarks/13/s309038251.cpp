#include<iostream>
using namespace std;
int fib(int n)
{
    int F[50];
    if(n<=1) return 1;
    F[0] = 1;
    F[1] = 1;
    for(int i = 2 ; i <= n; i++)
    {
        F[i] = F[i-1] + F[i-2];
    }
    return F[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}