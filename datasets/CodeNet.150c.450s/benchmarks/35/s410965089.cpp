#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

template<typename T>
T m(T a, T b) { return a > b ? a : b; }

vector<int> v(5001);

int main(void) {
    int N;
    while(true) {
        cin >> N;
        if(N == 0) break;

        for(int i = 0; i < N; i++) cin >> v[i];

        long long mx = -100000L;

        for(int i = 0; i < N; i++) {
            long long tmp = 0L;
            for(int j = i; j < N; j++) {
                tmp += v[j];
                mx = m(mx, tmp);
            }
        }
        cout << mx << endl;
    }
    return 0;
}