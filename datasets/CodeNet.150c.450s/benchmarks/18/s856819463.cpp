#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define int long long

signed main(){
        //int a;
        //while( scanf("%lld", &a) != EOF ){}

        int n;
        scanf("%lld",&n);
        int m=100000;
        for(int i=0;i<n;i++){
                m=m*1.05;
                m=((m-1)/1000+1)*1000;
        }
        printf("%lld\n", m);

        return 0;
}