#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, money=100000;
    cin >> n;
    while(n--){
        money*=1.05;
        money+=(money%1000==0? 0:1000-money%1000) ;
    }
    cout << money << "\n";
}

