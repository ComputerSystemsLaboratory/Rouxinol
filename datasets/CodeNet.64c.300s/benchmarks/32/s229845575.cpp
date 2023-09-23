#include<iostream>
#include<climits>
using namespace std;

int main() {
    int n, a;
    int min = INT_MAX;
    int max = INT_MIN;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        min = a < min ? a : min;
        max = a > max ? a : max;
        sum += a;
    }
    cout << min << ' ' << max << ' ' << sum << endl;
}