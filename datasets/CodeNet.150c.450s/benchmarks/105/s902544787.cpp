#include<bits/stdc++.h>
using namespace std;
#define LL long long 
int n;
LL a[66], x[222], b[66];
char s[222];
void insert(LL x, LL *a){
    for(int i = 60;i >= 0; i--){
        if(x >> i & 1){
            if(!a[i]){
                a[i] = x; 
                break;
            }
            else x ^= a[i];
        }
    }
}
bool check(LL x){
    for(int i = 60;i >= 0; i--){
        if(x >> i & 1)x ^= a[i];
    }
    return x != 0;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        scanf("%d", &n);
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        for(int i = 1;i <= n; i++)scanf("%lld", &x[i]);
        scanf("%s", s + 1);
        bool fl = 0;
        for(int i = n;i >= 1; i--){
            if(s[i] == '0')insert(x[i], a);
            else fl |= check(x[i]);
        }
        printf("%d\n", fl);
    }
    return 0;
}
