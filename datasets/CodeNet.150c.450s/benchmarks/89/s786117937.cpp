#include <bits/stdc++.h>
using namespace std;
bool is_prime[1000000];
int main() {
    for(int i=2;i<1000000;i++) is_prime[i]=1;
    for(int i=2;i*i<1000000;i++) {
        if(!is_prime[i]) continue;
        for(int j=i*2;j<1000000;j+=i) is_prime[j]=0;
    }
    int a,d,n;
    while(scanf("%d %d %d",&a,&d,&n),a) {
        int cnt=0;
        while(1) {
            if(is_prime[a]) cnt++;
            if(cnt==n) break;
            a+=d;
        }
        printf("%d\n",a);
    }
}