#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;

int prime[MAX_N];
bool is_prime[MAX_N + 1];
    
int main(void) {

    int p = 0;
    for(int i = 0; i <= 1000000; i++) is_prime[i] = true;
    is_prime[0] = is_prime[1] = false;


    for(int i = 2; i <= 1000000; i++) {
        if(is_prime[i]) {
            prime[p] = i;
            p++;
            for(int j = 2 * i; j <= 1000000; j += i) is_prime[j] = false;
        }
        
    }

    int a, d, n;
    while(1){
        cin >> a >> d >> n;
        if(!n) break;
        int i = a;
        int j = 0;
        while(1){
            if(is_prime[i + j*d]) n--;
            if(n == 0){
                cout << i + j*d << endl;
                break;
            }
            j++;
        }
    }

    return 0;
}