#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    unsigned long long n,m;
    
    cin>>n;if(n==0)n=1;m=n-1;
    while(m>0)
        n*=m--;
    cout<<n<<endl;
    return 0;
}