#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    bool is_prime[1000000];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for(int i=0; i<1000000; i++){
        if(is_prime[i]){
            for(int j=2*i; j<1000000; j+=i)
                is_prime[j] = false;
        }
    }
    
    int a, d, n;
    while(cin>>a>>d>>n, a|d|n){
        for(int i=0; i<n; i++){
            while(!is_prime[a]){
                a += d;
            }
            a += d;
        }
        cout << a-d << endl;
    }
    
    return 0;
}