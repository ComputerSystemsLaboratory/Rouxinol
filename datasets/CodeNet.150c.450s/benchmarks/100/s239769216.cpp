//  0019.cpp

#include <cstdio>
#include <cmath>

using namespace std;


int main(){
    long long int n,a=1;
    
    scanf("%lld",&n);
    
    for(int i=1;i<=n;i++)
        a *= i;
    
    printf("%lld\n",a);
    
    
    return 0;
}