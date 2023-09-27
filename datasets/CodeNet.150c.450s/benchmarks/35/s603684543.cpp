#include<iostream>
#include<cstdio>
using namespace std;
#define int long long
signed main(){
        int n;
        while( scanf("%lld", &n) != EOF ){
                if(n==0) break;
                int max=-100001;
                int now=0;
                for(int i=0;i<n;i++){
                        int t;
                        scanf("%lld", &t);
                        if(now+t>t)now+=t;
                        else now = t;
                        if(now>max) max=now;
                }
                printf("%lld\n",max);
        }
        return 0;
}