#include<bits/stdc++.h>
using namespace std;
long long int serch(long long int n)
{
    if(n==1)return n;
    return n*serch(n-1);
}
int main()
{
    long long int n;
    cin>>n;
    n=serch(n);
    cout<<n<<endl;
}