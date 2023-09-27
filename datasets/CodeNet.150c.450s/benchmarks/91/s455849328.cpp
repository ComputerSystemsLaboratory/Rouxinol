#include <iostream>
#include <vector>
#include <math.h>
#define REP(i,n) for(int (i) = 0; i <= n; ++i)
#define N 1000000
using namespace std;

vector<int>prime;

void Eratosthenes(){
    bool f[N];
    for(int i = 0; i < N; i++){
        f[i] = true;
    }
    f[0]=f[1]=false;
    
    for(int i = 2; i < sqrt(N); i++){
        if(f[i]){
            for(int j = 0; i * (j + 2) < N; j++){
                f[i *(j + 2)] = false;
            }
        }
    }
    
    for(int i = 2; i < N; i++){
        if(f[i]){
            prime.push_back(i);
        }
    }
}

int main() {
    int n;
    Eratosthenes();
    while(cin>>n){
        int ret = 0;
        for (int j = 0; j < prime.size(); j++) {
            if (prime[j] > n)break;
            ret++;
        }
        cout<<ret<<endl;
    }
    return 0;
}