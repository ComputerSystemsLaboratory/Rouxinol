#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

#define MAX 1000000

int a,d,n;

bool is_prime[MAX+1];
bool is_prime_small[MAX+1];


int main(){
    while(1){
        int ans=0;
        scanf("%d %d %d",&a,&d,&n);
        if(a==0 && d==0 && n==0)break;
        for (int i = 0; i*i <= MAX; i++) is_prime_small[i] = true;
        for (int i = 0; i <= MAX; i++) is_prime[i] = true;

        for(int i= 2; i*i <= MAX ;i++){
            if(is_prime_small[i]){
                for (int j = 2*i; j*j <= MAX ; j+= i) is_prime_small[j] = false;
                for(int j = max(2,(a+i-1)/i)*i;j <= MAX;j+= i)is_prime[j-a] = false;
            }
        }
        int p=0;
        //is_prime[i-a] = true ⇒　iが素数
        for (int i = a; i <= MAX; i+=d){
            if(i==1)continue;
            if(is_prime[i-a]){
                p++;
            }
            if(p==n){
                ans=i;
                break;
            }
        }
        printf("%d\n",ans);


    }
}
