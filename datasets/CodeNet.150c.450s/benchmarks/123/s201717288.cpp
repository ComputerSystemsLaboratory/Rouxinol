#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int a)
{
    if(a==2)
        return true;
    for(int i =2;i<=sqrt(double(a))+1;i++)
    {
        if(a%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,m,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(isPrime(m))
            cnt++;
    }
    cout<<cnt<<endl;;
    return 0;
}