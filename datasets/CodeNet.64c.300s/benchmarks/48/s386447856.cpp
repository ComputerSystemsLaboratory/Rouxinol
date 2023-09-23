#include <iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn=999999+5;
int prime[maxn];
bool is_prime[maxn];
int sieve(int n)
{
    int p=0;
    fill(is_prime,is_prime+n+1,true);
    is_prime[0]=is_prime[1]=true;
    for(int i=2;i<=n;i++)
    {
        if(is_prime[i]){
            prime[p++]=i;
            for(int j=2*i;j<=n;j+=i) is_prime[j]=false;
        }
    }
    return p;
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<sieve(n)<<endl;
    }
    return 0;
}