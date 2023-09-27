#include<iostream>
using namespace std;
int main()
{
    long int n, i, fact=1;
    cin>>n;
    
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}