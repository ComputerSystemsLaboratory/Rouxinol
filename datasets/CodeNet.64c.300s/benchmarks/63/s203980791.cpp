#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


long long gcd(long long x,long long y){
    while(x%y!=0){
        long long tmp;
        tmp=x;
        x=y;
        y=tmp%y;
    }
    return y;
}

long long lcm(long long x,long long y){
    return x*y/gcd(x,y);
}

int main(){
    long long a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        long long g,l;
        if(a<b){
            swap(a,b);
        }
        g=gcd(a,b);
        l=lcm(a,b);
        printf("%lld %lld\n",g,l);
    }
    return 0;
}