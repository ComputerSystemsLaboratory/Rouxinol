#include <iostream>
#include <cstdio>
using namespace std;

int f(int x) {
    return(x * x);
}

int main(void) {
    int d;
    while(cin >> d) {
        int width = d; int height = d;
        long long sum = 0;
        while(height <= 600 - d) {
            sum += width * f(height);
            height += d;
        }
        cout << sum << endl;
    }
    return(0);
}