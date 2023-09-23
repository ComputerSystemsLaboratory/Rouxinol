#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
signed main(){
        int a;
        while( scanf("%lld", &a) != EOF ){
                int b=1;
                for(int i=2; i<=a; i++){
                        b*=i;
                }
                printf("%lld\n", b);
        }
        return 0;
}