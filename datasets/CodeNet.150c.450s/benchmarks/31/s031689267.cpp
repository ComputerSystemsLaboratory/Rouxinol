#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;

int main() {
    int count, minPrice = INT_MAX, nowPrice, nowIncome, maxIncome = INT_MIN;
    cin >> count;
   
    for (int i = 0; i < count; i++) {
        cin >> nowPrice;

        nowIncome = nowPrice - minPrice;
        if (nowIncome > maxIncome) {
            //cout << "OOOOI" << nowPrice << minPrice << endl;
            maxIncome = nowIncome;
        }

        if (minPrice > nowPrice) {
            minPrice = nowPrice;
        }
    }

    cout << maxIncome << endl;
}