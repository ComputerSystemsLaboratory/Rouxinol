#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000007;

bool isprime[10000];
int prime[10000];
int lim = 0;

void eratosthenes(){
    for(int i = 0; i < 10000; i++){
        isprime[i] = true;
    }
    isprime[0] = isprime[1] = false;
    for(int x = 2; x < 10000; x++){
        if(isprime[x]){
            prime[lim++] = x;
            for(int y = x * x; y < 10000; y += x){
                isprime[y] = false;
            }
        }
    }
}

int main(){
    eratosthenes();
    int N, a, ans;
    ans = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &a);
        bool flg = true;
        for(int i = 0; i < lim; i++){
            if(prime[i] >= a) break;
            if(a % prime[i] == 0){
                flg = false;
                break;
            }
        }
        if(flg) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}