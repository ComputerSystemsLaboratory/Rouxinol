#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <list>
#include <cmath>
using namespace std;
int n;

list<int> ans;

bool is_prime(int n)
{
    int m=sqrt(n);
    for(int i=2;i<=m;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
void prime_factorize(int n)
{
    int tmp=n;
    if(is_prime(n))
    {
        printf("%d: %d\n",tmp,n);
        return;
    }
    while(n%2==0)
    {
        ans.push_back(2);
        n/=2;
        if(n&1) break;
    }
    for(int i=3;i<=n;i+=2)
    {
        while(n%i==0)
        {
            ans.push_back(i);
            n/=i;
        }
        if(n==1) break;
    }
    printf("%d:",tmp);
    for(list<int>::iterator iter=ans.begin();iter!=ans.end();iter++)
    {
        printf(" %d",*iter);
    }
    printf("\n");
}

int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    prime_factorize(n);
    return 0;

}