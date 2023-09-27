#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
int find(int a, int b)
{
    if(a==0)
        return b;
    return find(b%a,a);
}
int main(void) 
{
    long long a,b;
    cin>>a>>b;
    long gcd=find(a,b);
    cout<<gcd<<endl;
    return 0;
}