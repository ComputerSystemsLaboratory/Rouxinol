#include<cstdio>
using namespace std;
long long int fact(long long int x){
    if(x == 1) return 1;
    else return fact(x-1) * x;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld\n",fact(n));
    return 0;
}