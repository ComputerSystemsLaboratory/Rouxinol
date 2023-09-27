#include <cmath>
#include <cstdlib>
#include <iostream>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <chrono>
#include <random>
#include <tuple>
#include <utility>
#include <fstream>
#include <complex>
#define _USE_CMATH_DEFINES

const long INF = (1l << 30);
const long LINF = (1l << 60); //1.15*10^18

long n;

std::vector<long> prime_factorize(long n){
    long div = 2;
    std::vector<long> ret;
    if(n < 2){
        printf("prime_factorize input invalid!\n");
        return ret;
    }
    while(div * div <= n){
        if(n % div == 0){
            ret.push_back(div);
            n /= div;
        }else{
            div++;
        }
    }
    ret.push_back(n);
    return ret;
}

int main(){
    scanf("%ld", &n);
    std::vector<long> p = prime_factorize(n);
    printf("%ld:", n);
    for(int i = 0; i < p.size(); i++){
        printf(" %ld", p[i]);
    }
    printf("\n");
}

