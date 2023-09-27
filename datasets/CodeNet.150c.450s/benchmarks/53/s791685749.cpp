#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

using namespace std;


void prime_factor(int n){
    int d = n;
    for(int i=2; i * i <= d; i++){
        while(n % i == 0){
            cout << " " << i;
            n /= i;
        }
    }

    if(n != 1) cout << " " << n;
}
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << n << ":";
    prime_factor(n);
    cout << "\n";
    return 0;
}