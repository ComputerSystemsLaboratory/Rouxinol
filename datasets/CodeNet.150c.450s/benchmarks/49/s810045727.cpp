#include<iostream>

using namespace std;

int main() {
    int n, min, max, sum, p;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        sum = 0;
        for (int i=0; i<n; i++) {
            cin >> p;
            sum += p;
            if (i == 0) {
                min = p;
                max = p;
            }
            min = p<min? p: min;
            max = p>max? p: max;
        }
        cout << (sum-min-max)/(n-2) << endl;
    }
    return 0;
}