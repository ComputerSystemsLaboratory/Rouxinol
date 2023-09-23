#include <iostream>

using namespace std;

#define MAX_N (1000000)

bool is_prime[MAX_N];
int sum[MAX_N + 1];

int main()
{
    int n;
    
    for (int i = 0; i < MAX_N; i++){
        is_prime[i] = true;
    }
    
    is_prime[0] = false;
    is_prime[1] = false;
    
    for (int i = 4; i < MAX_N; i += 2){
        is_prime[i] = false;
    }
    
    for (int i = 3; i * i < MAX_N; i += 2){
        for (int j = i + i; j < MAX_N; j += i){
            is_prime[j] = false;
        }
    }
    
    sum[0] = 0;
    for (int i = 0; i < MAX_N; i++){
        sum[i + 1] = sum[i] + is_prime[i];
    }
    
    while (cin >> n){
        cout << sum[n + 1] << endl;
    }
}