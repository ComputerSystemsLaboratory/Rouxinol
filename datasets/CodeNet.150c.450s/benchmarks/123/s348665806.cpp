#include <iostream>
using namespace std;
int main(void){
    int N = 1;
    int primes[1300] = {0};
    int i, j;
    bool isprime;
    int input;
    int count = 0;
    
    primes[0] = 2;
    
    for(i = primes[N - 1] + 1; i < 10000; i++){
        isprime = true;
        for(j = 0; j < N; j++){
            if(!(i % primes[j])){
                isprime = false;
                break;
            }
        }
        if(isprime){
            primes[N] = i;
            N++;
        }
    }
    
//    cout << N << endl;
//    for(i = 0; i < N; i++) cout << primes[i] << " ";
    
    cin >> input;
    while(cin >> input){
//        cout << input;
        isprime = true;
        for(j = 0; j < N; j++){
            if((primes[j] < input) && !(input % primes[j])){
                isprime = false;
            }
        }
        if(isprime) count++;
    }
    
    cout << count << endl;
    return 0;
}