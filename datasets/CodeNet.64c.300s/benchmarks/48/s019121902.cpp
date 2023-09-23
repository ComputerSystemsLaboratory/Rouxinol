#include <iostream>
#include <cmath>
using namespace std;

#define N 1000000

int main() {
    int n;
    bool prime[N+1];
    int count[N];
    for(int i=2; i<N; i++){
        prime[i] = true;
    }
    for(int i=2; i<N; i++){
        if(prime[i]){
            count[i] = count[i-1]+1;
            if(i<1000){
                for(int j=i*2; j<N; j+=i){
                    prime[j] = false;
                }
            }
        }else{
            count[i] = count[i-1];
        }
    }
    
    while(cin >> n){
        cout << count[n] << endl;
    }
    return 0;
}