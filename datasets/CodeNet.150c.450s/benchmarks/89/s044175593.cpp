#include <cstdio>
#include <vector>

bool isNotPrime[1000001];
std::vector<int> primes;

int main(){
    primes.push_back(2);
    for(int i=4;i<=1000000;i+=2){
        isNotPrime[i] = true;
    }

    for(int i=3;i<=1000000;i+=2){
        if(!isNotPrime[i]){
            primes.push_back(i);
            for(int j=2*i;j<=1000000;j+=i){
                isNotPrime[j] = true;
            }
        }
    }

    int A, D, N;
    while(scanf("%d %d %d", &A, &D, &N), A || D || N){
        int t = 0;
        for(int p : primes){
            if(p < A){continue;}
            if((p-A) % D > 0){continue;}
            if(++t == N){printf("%d\n", p); break;}
        }
    }
}