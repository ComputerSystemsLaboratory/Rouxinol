#include<iostream>
#include<math.h>
using namespace std;
long long dp[30];

void tribonacci(int n){
    if (n==1) {
        dp[n-1] = 1;
    } else if (n==2) {
        dp[n-1] = 2;
    } else if (n==3) {
        dp[n-1] = 4;
    } else {
        dp[n-1] = dp[n-2] + dp[n-3] + dp[n-4];
    }
}

int main() {
    int n;
    double days;
    long long year;
    for(int i=1;i<=30;i++){
        tribonacci(i);
    }
    while(1){
        cin >> n;
        if (n==0) break;
        days = dp[n-1]/10;
        year = floor(days/365)+1;
        cout << year << endl;
    }
    return 0;
}