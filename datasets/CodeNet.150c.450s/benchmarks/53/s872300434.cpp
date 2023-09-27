#include <iostream>
#include <cmath>

static bool sieve[100000];

int main()
{
    long long n;
    std::cin >> n;
    long long size = std::sqrt(n) + 2;
    long long p = 2;
    std::cout << n << ":";
    while(n!=1&p<size){
        while(n%p==0){
            n/=p;
            std::cout << " " << p;
        }
        for(long long i=p*2;i<size;i+=p){
            sieve[i]=true;
        }
        long long cp = p;
        for(long long i=p+1;i<size;i++){
            if(!sieve[i]){
                 p = i;
                 break;
            }
        }
        if(cp==p){
            break;
        }
    }
    if(n!=1){
        std::cout << " " << n;
    }
    std::cout << "\n";
    return 0;
}

