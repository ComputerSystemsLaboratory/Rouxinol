#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i=1,n;
    scanf("%lld",&n);
    while(n!=0){
        i*=n;
        n--;
    }
    printf("%lld\n",i);
    return 0;
}