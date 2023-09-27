#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
//
// Created by karayuu on 2018-12-23.
//

int main() {
    int n;
    cin >> n;

    int max = INT_MIN, min = INT_MAX;
    long long int sum = 0;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        max = std::max(max, a);
        min = std::min(min, a);
        sum += a;
    }

    printf("%d %d %lli\n", min, max, sum);
}
